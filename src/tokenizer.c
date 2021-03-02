#include <stdio.h>
#include  <stdlib.h>
#include "tokenizer.h"


/*return true for space */
int space_char(char c){
 
  return (c ==' ' || c =='\t'&& c!= '\0' );
  
}
 
/* 
Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){
  return (c!=' '&& c!='\t'&& c!='\0');
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer if 
   str does not contain any words. */
char *word_start(char *str){
  while(non_space_char(*str)){ 
    str++; 
  }
  return str;

}

/* Returns a pointer terminator char following *word
 Return a zero pointer if str does not contain any words.  */
char *word_terminator(char *word){
    while(space_char(*word)){
      word++;
  }
  return word;        
}

/* Counts the number of words in the string argument. */
int count_words(char *str){
  
  int count = 0;
  char *p = str;
  
  while(*p){
    p = word_start(p);     
    p = word_terminator(p);
    count++;
    }
  return count;
        
}

/* Returns a freshly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
 char *copy_str(char *inStr, short len){
   char *fresh = (char*) malloc((len+1)*sizeof(char));
   for( int i = 0; i<len;i++){
     fresh[i] = inStr[i];
   }
   fresh[len] ='\0';
   return fresh;
 }

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str){
  int len = count_words(str);
  char **tokens = (char**) malloc((len+1)*(sizeof(char*)));

  for(int i =0;i<len;i++){
    if(*str = ' '){
       word_start(str);
    }
    int len_of = word_start(str) - word_terminator(str);
    tokens[i] =  copy_str(str,len_of);
    str = word_start(word_terminator(str));
  }
  return tokens;
 
}

/* Prints all tokens. */
void print_tokens(char **tokens){
  int count =0
  while(count!= '\0'){
    printf(*tokens);
    tokens++;
  }
  

}
/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);
