
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
/*
typedef struct{
  struct LinkedList *list;
  int relations;
}Database;
*/

typedef struct Database Database;
extern Database* Database_New(int i);
extern void Db_SetRelations(Database* db, char *c);
extern void Db_Insert(Database* db, char *c);
extern void Db_Delete(Database* db, char *c);
extern Database* Db_Lookup(Database *db, char *c);
extern void Db_Export(Database* db, char* filename);
extern Database* Db_Import(char* filename);
extern int main();
