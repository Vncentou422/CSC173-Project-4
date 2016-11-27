//CSC 173 Project 2

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

typedef struct{
  struct LinkedList *list;
  int relations;
}Database;

extern Database* Database_New(int i);
extern void SetRelations(Database *db, char c);
extern void insert(Database *db, char *c);
extern void delete(Database *db, char *c);
extern Database lookup(Database *db, char *c);
extern void export_db(char* filename);
extern int main();
