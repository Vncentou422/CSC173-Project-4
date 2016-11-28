//CSC 173 Project 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LinkedList.h"
#include "Database.h"

struct Database{
  struct LinkedList *list;
  int relations;
};
typedef struct Database Database;

Database* Database_New(int i) {
    Database *db = (Database*)malloc(sizeof(Database));
    db->list = LinkedList_new();
    db->relations = i;
    return db;
}

void Db_SetRelations(Database *db, char *c){
  Db_Insert(db, c);
}

void Db_Insert(Database *db, char *c){
  LinkedList *list = LinkedList_new();
  char* token;
  char* dst = strdup(c);
  //tokenize the input string
  for (token = strtok(dst, ","); token != NULL; token = strtok(NULL, ","))
  {

    LinkedList_add_at_end(list, token);
  }
  LinkedList_add_at_end(db->list,list);
}

void Db_Delete(Database *db, char *c){
  char delim[] = ",";
  char* token;
  int toDelete=1;
  char* dst = strdup(c);
  //looping through "big" arraylist
  LinkedListIterator *lli =  LinkedList_iterator(db->list);
  while (LinkedListIterator_has_next(lli)){
    toDelete=1;
    void *data = LinkedListIterator_next(lli);
    //going through the individual linked lists
    LinkedListIterator *lliTup =  LinkedList_iterator(data);

    for (token = strtok(dst, delim); token; token = strtok(NULL, delim)){
      if (LinkedListIterator_has_next(lliTup)){
        void *dataTup = LinkedListIterator_next(lliTup);
        char *str = (char*)dataTup;
        //ignores checking if "*"
        if(strcmp(token, "*")!=0){
          //breaks when ANY part of the LL doesnt match
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
    free(lliTup);
    if(toDelete=1){
      LinkedList_remove(db->list, data);
    }
  }
  free(lli);
}

Database* Db_Lookup(Database *db, char *c){
  char delim[] = ",";
  char* token;
  int toAdd=1;
  char* dst = strdup(c);
  //add an iterator for the linkedlist. iterate through everything, then put everything that matches into a new "database"
  //when you reach a "*", break, otherwise check it.
  Database *newdb = (Database*)malloc(sizeof(Database));
  newdb->list = LinkedList_new();
  //looping through "big" arraylist
  LinkedListIterator *lli =  LinkedList_iterator(db->list);
  while (LinkedListIterator_has_next(lli)){
    toAdd=1;
    void *data = LinkedListIterator_next(lli);
    //going through the individual linked lists
    LinkedListIterator *lliTup =  LinkedList_iterator(data);

    for (token = strtok(dst, delim); token; token = strtok(NULL, delim)){
      if (LinkedListIterator_has_next(lliTup)){
        void *dataTup = LinkedListIterator_next(lliTup);
        char *str = (char*)dataTup;
        if(strcmp(token, "*")!=0){
          if(strcmp(token, str)!=0){
            toAdd=0;
            break;
          }
        }
      }
      else{
        break;
      }
    }
    free(lliTup);
    if(toAdd=1){
      LinkedList_add_at_end(newdb->list, data);
    }
  }
  free(lli);
  return newdb;

}
void Db_print(Database *db){
  LinkedListIterator *lli =  LinkedList_iterator(db->list);
  while (LinkedListIterator_has_next(lli)){
    void *data = LinkedListIterator_next(lli);
    LinkedList_print_string_list(data);
  }

}
void Db_Export(Database *db, char* filename){
  char* ret;
  LinkedListIterator *lli =  LinkedList_iterator(db->list);
  while (LinkedListIterator_has_next(lli)){
    void *data = LinkedListIterator_next(lli);
    //going through the individual linked lists
    ret = concat(ret, LinkedList_export(data));
    ret = concat(ret, "\n");
  }
  free(lli);

  FILE *fileOut;
	fileOut = fopen(filename , "w");

	fprintf(fileOut, "%s\n", ret);

	fclose(fileOut);

}

Database* Db_Import(char* filename){

}


// int main(){
//   return 0;
// }
