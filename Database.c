//CSC 173 Project 2

#include <stdio.h>
#include "LinkedList.h"

#define MAX 100
#define EMPTY 0
/*
int size = EMPTY;
char x[MAX];
*/
struct Database{
  struct LinkedList list;
  int relations
};
typedef struct Database Database;

Database* Database_New(int i) {
    Database *db = (Database*)malloc(sizeof(Database));
    db->list = LinkedList_new();
    relations = i;
    return db;
}

void SetRelations(Database *db, char c){

}

void insert(Database *db, char *c){
  LinkedList *list = LinkedList_new();
  char delim[] = " ,";
  char* token;
  //tokenize the input string
  for (token = strtok(c, delim); token; token = strtok(NULL, delim))
  {
    LinkedList_add_at_end(list, token);
  }
  LinkedList_add_at_end(db.list,list);
}

void delete(Database *db, char *c){
  char delim[] = " ,";
  char* token;
  int toDelete=1;
  //add an iterator for the linkedlist. iterate through everything, then put everything that matches into a new "database"
  //when you reach a "*", break, otherwise check it.

  //looping through "big" arraylist
  LinkedListIterator *lli =  LinkedList_iterator(db->list);
  while (LinkedListIterator_has_next(lli)){
    toDelete=1;
    void *data = LinkedListIterator_next(lli);
    //going through the individual linked lists
    LinkedListIterator *lliTup =  LinkedList_iterator(data);

    for (token = strtok(c, delim); token; token = strtok(NULL, delim)){
      if (LinkedListIterator_has_next(lliTup)){
        void *dataTup = LinkedListIterator_next(lliTup);
        char *str = (char*)dataTup;
        if(strcmp(token, "*")!=0){
          if(strcmp(token, str)!=0){
            toDelete=0;
            break;
          }
        }
      }
      else{
        break;
      }
    }
    if(toDelete=1){
      LinkedList_remove(db->list, data);
    }
  }
}

void lookup(Database *db, char *c){
  char delim[] = " ,";
  char* token;
  int toDelete=1;
  //add an iterator for the linkedlist. iterate through everything, then put everything that matches into a new "database"
  //when you reach a "*", break, otherwise check it.

  //looping through "big" arraylist
  LinkedListIterator *lli =  LinkedList_iterator(db->list);
  while (LinkedListIterator_has_next(lli)){
    toDelete=1;
    void *data = LinkedListIterator_next(lli);
    //going through the individual linked lists
    LinkedListIterator *lliTup =  LinkedList_iterator(data);

    for (token = strtok(c, delim); token; token = strtok(NULL, delim)){
      if (LinkedListIterator_has_next(lliTup)){
        void *dataTup = LinkedListIterator_next(lliTup);
        char *str = (char*)dataTup;
        if(strcmp(token, "*")!=0){
          if(strcmp(token, str)!=0){
            toDelete=0;
            break;
          }
        }
      }
      else{
        break;
      }
    }
    if(toDelete=1){
      LinkedList_remove(db->list, data);
    }
  }
}
