#include <stdio.h>
#include  <stdlib.h>
#include "tokenizer.h"
#include "history.h"


/* Add a history item to the end of the list.
   List* list - the linked list
   char* str - the string to store
*/
List* init_history(){
  List *ll = malloc(sizeof(List));
}

void add_history(List *list, char *str){
  Item *node = malloc (sizeof(Item));
  if(list->root==NULL){ // if list is empty.
    node->id =1;
    node->str = str;
    list->root = node;
  }else{
    int count_id =0;
    node->id = 2;
    Item *temp =list->root;
    while(temp != NULL){
      temp = temp->next;
      count_id++;
    }
    node->id = count_id;
    node->str = str;
    temp->next = node;
  }
 }


/* Retrieve the string stored in the node where Item->id == id.
   List* list - the linked list
   int id - the id of the Item to find */
char *get_history(List *list, int id){
  Item *temp=list->root;
  char *str;
  while(temp!=NULL){
    if(temp->id==id){
      str = temp->str;
      return str;
    }
    temp = temp->next;
  }
  return 0;
}

/*Print the entire contents of the list. */
void print_history(List *list){
  Item *temp = list->root;
  
  while(temp!=NULL){
    printf("printing %s \n",temp->str);
    temp = temp->next;     
  }
  

}

/*Free the history list and the strings it references. */
void free_history(List *list){
  Item *temp = list->root;
  
  while(temp!=NULL){
    free(temp);
    temp = temp->next;  
  }
  
}
