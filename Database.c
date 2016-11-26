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

Database* DatabaseNew(int i) {
    Database *db = (Database*)malloc(sizeof(Database));
    relations = i;
    return db;
}

void SetRelations(Database db, char c){

}

void insert(Database db, char *c){
  LinkedList *list = LinkedList_new();
  char delim[] = " ,";
  char* token;
  for (token = strtok(c, delim); token; token = strtok(NULL, delim))
  {
    LinkedList_add_at_end(list, token);
  }
  LinkedList_add_at_end(db.list,list);
}