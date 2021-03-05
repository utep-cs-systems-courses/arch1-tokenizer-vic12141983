# include <stdio.h>
# include <stdlib.h>
# include "tokenizer.h"
# include "history.h"

int main(){
  char word[100];
    
  
  printf("Please enter a word:");
  fgets(word,100,stdin);
  puts(word);
 
  

   
   printf("Checking for empty spaces before first char: %d \n",space_char(word[1]));
   
   printf("Spaces afer the each word: %d \n" ,non_space_char(word[1]));
   printf("Returning word after space : % s \n", word_start(word));
   printf("Now counting number of  words in string: %d \n",count_words(word));
   printf("Now copying in String in freshly new String: % s \n",copy_str(word,19));
   
   char** test = tokenize(word);
   print_tokens(test);
   free_tokens(test);
   
   

}
