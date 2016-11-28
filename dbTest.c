#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Database.h"

int main(int argc, char **argv) {
  Database* db1 = Database_New(3);
  Db_SetRelations(db1, "Course,StudentID,Grade");
  Db_Insert(db1, "CS101,12345,A");
  Db_Insert(db1, "CS101,67890,B");
  Db_Insert(db1, "EE200,12345,C");
  Db_print(db1);
  //Db_Export(db1, "testOutput.txt");
}
