library(mgsub)
library(stringr)
key<-readLines("key.txt")

nav_key_index <- str_detect(key,"NAV")
mou_key_index <- str_detect(key,"MOU")

unmirrored_key_index <- as.logical(nav_key_index + mou_key_index)

unmirrored <- key[unmirrored_key_index]
mirrored <- key[!unmirrored_key_index]


mirrored <- unlist(lapply(mirrored,
       mgsub,
       pattern=c("1_1","1_2","1_3","1_4","2_1","2_2","2_3","2_4"),
       replacement=c("1_4","1_3","1_2","1_1","2_4","2_3","2_2","2_1"),
  ))

key <- sort(c(mirrored,unmirrored))

key <- paste0(key,collapse="\n")

sink("left_key.txt")
cat(key)
sink()


key<-readLines("combos.txt")

nav_key_index <- str_detect(key,"NAV")
mou_key_index <- str_detect(key,"MOU")

unmirrored_key_index <- as.logical(nav_key_index + mou_key_index)

unmirrored <- key[unmirrored_key_index]
mirrored <- key[!unmirrored_key_index]


mirrored <- unlist(lapply(mirrored,
                          mgsub,
                          pattern=c("1_1","1_2","1_3","1_4","2_1","2_2","2_3","2_4"),
                          replacement=c("1_4","1_3","1_2","1_1","2_4","2_3","2_2","2_1"),
))

key <- c(mirrored,unmirrored)

key <- paste0(key,collapse="\n")

sink("left_combos.txt")
cat(key)
sink()