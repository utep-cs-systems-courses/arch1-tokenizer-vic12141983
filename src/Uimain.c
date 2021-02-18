# include <stdio.h>
# include <stdlib.h>
# include "tokenizer.h"
# include "history.h"


int main(){
  char word[100];
  
  
  
  printf("$");
  fgets(word,100,stdin);
  puts(word);
  
  

   
   printf("Now checking for empty spaces %d \n",space_char(word[1]));
   printf("now checking for non empty spaces %d \n" ,non_space_char(word[1]));
   printf("Now counting number of  words in string %d \n",count_words(word));
}
