#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Database.h"

int main(int argc, char **argv) {
  Database* CSG = Database_New(3);
  Db_SetRelations(CSG, "Course,StudentID,Grade");
  Db_Insert(CSG, "CS101,12345,A");
  Db_Insert(CSG, "CS101,67890,B");
  Db_Insert(CSG, "EE200,12345,C");
  Db_Insert(CSG, "EE200,22222,B+");
  Db_Insert(CSG, "CS101,33333,A-");
  Db_Insert(CSG, "PH100,67890,C+");

  Database* SNAP = Database_New(4);
  Db_SetRelations(SNAP, "Course,Name,Address,Phone");
  Db_Insert(SNAP, "12345,C. Brown,12 Apple St.,555-1234");
  Db_Insert(SNAP, "67890,L. Van Pelt,34 Pear Ave,555-5678");
  Db_Insert(SNAP, "22222,P. Patty,56 Grape Blvd.,555-9999");

  Database* CP = Database_New(2);
  Db_SetRelations(CP, "Course,Prerequisite");
  Db_Insert(CP, "CS101,CS100");
  Db_Insert(CP, "EE200,EE005");
  Db_Insert(CP, "EE200,CS100");
  Db_Insert(CP, "CS120,CS101");
  Db_Insert(CP, "CS121,CS120");
  Db_Insert(CP, "CS205,CS101");
  Db_Insert(CP, "CS206,CS121");
  Db_Insert(CP, "CS206,CS205");

  Database* CDH = Database_New(3);
  Db_SetRelations(CDH, "Course,Day,Hour");
  Db_Insert(CDH, "CS101,M,9AM");
  Db_Insert(CDH, "CS101,W,9AM");
  Db_Insert(CDH, "CS101,F,9AM");
  Db_Insert(CDH, "EE200,Tu,10AM");
  Db_Insert(CDH, "EE200,W,1PM");
  Db_Insert(CDH, "EE200,Th,10AM");

  Database* CR = Database_New(2);
  Db_SetRelations(CR, "Course,Room");
  Db_Insert(CR, "CS101,Turing Aud.");
  Db_Insert(CR, "EE200,25 Ohm Hall");
  Db_Insert(CR, "PH100,Newton Lab.");



  Database* db2 = Db_Lookup(db1, "*,*,C");
  Db_print(db2);
  //Db_Export(db1, "testOutput.txt");
}
