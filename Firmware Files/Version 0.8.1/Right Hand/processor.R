#Read key.txt and combos.txt
key_legend <- readLines("key.txt")
combos <- readLines("combos.txt")

#Remove blank lines from key legend.
blank_lines <- which(key_legend=="")
if(length(blank_lines)>0){
key_legend <- key_legend[-blank_lines]
}

#Remove blank lines from combos.
blank_lines <- which(combos=="")
if(length(blank_lines)>0){
combos <- combos[-blank_lines]
}

#Double Escape New-Lines in Combos to Acount for Multi-Line Functions
combos <- gsub("\\n","\n",combos,fixed=TRUE)

#Split up the Combos into data.
combos <- strsplit(combos,split="\\|\\|")

#Split up the Keys into data.
key_legend <- strsplit(key_legend,split="\\|\\|")

#Get the Data for Key Legend
keys <- sapply(key_legend,"[[",1)
qmk_codes <-sapply(key_legend,"[[",2)

#Get the Data for Combos
descriptions <- sapply(combos,"[[",1)
commands <- sapply(combos,"[[",2)
combo_keys <- sapply(combos,"[[",3)


#Count the Combos
num_combos <- length(descriptions)

#Determine which QMK Codes are in Each Combo
combo_Qmk_Codes <- list()

aliases <- c()
for(i in 1:length(keys)){
  alias <- paste0("#define ",keys[i]," ",qmk_codes[i])
  aliases <- c(aliases,alias)
}

sink("aliases.c")
cat(paste0(aliases,collapse="\n"))
sink()

#Loop Through Combos
for(i in 1:num_combos){

  #Get the Keys in the Combo
  keys_in_combo <- unlist(strsplit(combo_keys[i],","))
  
  # #Replace short-hand with qmk code via the key-legend
  # for(j in 1:length(keys_in_combo)){
  #   match_index <- which(keys==keys_in_combo[j])
  #   if(match_index){
  #     keys_in_combo[j] <- qmk_codes[match_index]
  #   }
  # }
  
  #Add qmk_codes to list.
  combo_Qmk_Codes <- c(combo_Qmk_Codes,list(keys_in_combo))
}

#Build combos.c

#Initialize the combos.c text
text <- c()

#Initialize the enumeration of combos list for combos.c. 
enum <- c("enum combo_events{")

#Make  list of unique combos names
combo_names <- c()
#Loop through the 
for(i in 1:num_combos){
  
  #Make Combo Name
  name <- gsub("\\,","_",combo_keys[i])
  name <- paste0(c("COMBO_",name),collapse="")
  name <- toupper(name)
  
  #Add combo name to vector of combo names.
  combo_names <- c(combo_names,name)
  
  #Add combo name to the enumeration of combos.
  enum <- c(enum,paste0(name,",",collapse=""))
}

# Add COMBO_LENGTH to end of enumeration to get combo count. 
enum <- c(enum,"COMBO_LENGTH","};")

#Add enumeration of combos to the combos.c text.
text <- c(text,enum)

#Add a line telling QMK to check the combo length at the end of the enumeration. 
lengthString <- "uint16_t COMBO_LEN = COMBO_LENGTH;"
text <- c(text,lengthString)

#Add the combo definitions to the text of combos.c. 
for(i in 1:num_combos){
  string <- c("const uint16_t PROGMEM ")
  string <- c(string,tolower(combo_names[i]))
  string <- c(string,"[] = {")
  for(j in 1:length(combo_Qmk_Codes[[i]])){
    string <- c(string,combo_Qmk_Codes[[i]][j],",")
  }
  string <- c(string,"COMBO_END};")
  string <- paste0(string,collapse="")
  text <- c(text,string)
}

#Add the combo functionality to each 
text <- c(text,"combo_t key_combos[] = {")
for(i in 1:num_combos){
  string <- c("[",combo_names[i],"]"," = ","COMBO_ACTION(",tolower(combo_names[i]),"),")
  string <- paste0(string,collapse="")
  text <- c(text,string)
}

text <- c(text,"};")

text <- c(text,"void process_combo_event(uint16_t combo_index, bool pressed) {")
text <- c(text,"switch(combo_index) {")

for(i in 1:num_combos){
  string <- c("case ",combo_names[i],":")
  string <- paste0(string,collapse="")
  text <- c(text,string)
  string <- c("if (pressed) {",commands[i],";}")
  string <- paste0(string,collapse="")
  text <- c(text,string,"break;")
}
text <- c(text,"}","}")
text <- paste0(text,collapse="\n")


sink("combos.c")
cat(text)
sink()


