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
  while(*str){
    if(non_space_char(*str)){
      return str;
    }
    str++; 
  }
  return 0;

}

/* Returns a pointer terminator char following *word
 Return a zero pointer if str does not contain any words.  */
char *word_terminator(char *word){
  while(*word){
    if(space_char(*word){
	return word;
      }
      word++;
  }
  return 0;        
}

/* Counts the number of words in the string argument. */
int count_words(char *str){

  int count =0;
  while(*str){
}
  hello    world       

}

/* Returns a fresly allocated new zero-terminated string 
   containing <len> chars from <inStr> */
char *copy_str(char *inStr, short len);

/* Returns a freshly allocated zero-terminated vector of freshly allocated 
   space-separated tokens from zero-terminated str.

   For example, tokenize("hello world string") would result in:
     tokens[0] = "hello"
     tokens[1] = "world"
     tokens[2] = "string" 
     tokens[3] = 0
*/
char **tokenize(char* str);

/* Prints all tokens. */
void print_tokens(char **tokens);

/* Frees all tokens and the vector containing themx. */
void free_tokens(char **tokens);
