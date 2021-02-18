#include <stdio.h>
#include  <stdlib.h>
#include "tokenizer.h"

#define in 1 /* inside a word*/
#define out 0 /* outside a word */

int space_char(char c){
 
  return (c==' ' || c=='\t'&& c!= '\0' );
  
}
 
/* 
Return true (non-zero) if c is a non-whitespace 
   character (not tab or space).  
   Zero terminators are not printable (therefore false) */ 
int non_space_char(char c){
  return (c!=' '|| c!='\t'&& c!='\0');
}

/* Returns a pointer to the first character of the next 
   space-separated word in zero-terminated str.  Return a zero pointer if 
   str does not contain any words. */
char word_start(char *str){
  if( *str == ' ');
  return 0;
  
  
} 

/* Returns a pointer terminator char following *word */
char *word_terminator(char *word);

/* Counts the number of words in the string argument. */
int count_words(char *str){
  int state =out;
  int wor_count =0;
  while(*str){
    if(*str == ' ' || *str =='\n' || *str =='\t')
      state =out;
    else if(state == out){
      state = in;
      ++wor_count;
    }
    ++str;

  }
  return wor_count;

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
