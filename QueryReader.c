#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	query("What grade did Tim get in Computation and Formal Systems");
	
}

int query(char* queryInput)
{
	
	
	//What grade did StudentName get in CourseName
	
	if(queryInput[2] == 'a')
	{
		
		
		printf("1");
		int iterator = 15;
		int iterator2 = 0;
		char studentName[100];
		while(1< 2)
		{
			
			if(queryInput[iterator] == 'g' && queryInput[iterator+1] == 'e' && queryInput[iterator+2] == 't')
			{
				printf("2");
				break;
				
			}
			
			else
			{
				studentName[iterator2] = (char)queryInput[iterator];
				iterator++;
				iterator2++;
			 
			}
			
			printf("%s", &studentName);
			
		}
		
		
		
		
	}
	
	//Where is StudentName at Time on Day
	
	if(queryInput[2] == 'e')
	{
		
		printf("2");
	}
	

	
	
}