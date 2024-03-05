library(mgsub)
library(stringr)
key<-readLines("key.txt")



key <- unlist(lapply(key,
       mgsub,
       pattern=c("1_1","1_2","1_3","1_4","2_1","2_2","2_3","2_4"),
       replacement=c("1_4","1_3","1_2","1_1","2_4","2_3","2_2","2_1"),
  ))



key <- paste0(key,collapse="\n")

sink("left_key.txt")
cat(key)
sink()


key<-readLines("combos.txt")

key <- unlist(lapply(key,
                          mgsub,
                          pattern=c("1_1","1_2","1_3","1_4","2_1","2_2","2_3","2_4"),
                          replacement=c("1_4","1_3","1_2","1_1","2_4","2_3","2_2","2_1"),
))

key <- paste0(key,collapse="\n")

sink("left_combos.txt")
cat(key)
sink()