#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	query("What grade did Tim Chu get in Computation and Formal Systems");
	
}

int query(char* queryInput)
{
	
	
	//What grade did StudentName get in CourseName
	
	if(queryInput[2] == 'a')
	{
		
		
		int iterator = 15;
		int iterator2 = 0;
		int iterator3 = 0;
		char studentName[1000];
		char courseName[1000];
		while(1< 2)
		{
			
			if(queryInput[iterator] == 'g' && queryInput[iterator+1] == 'e' && queryInput[iterator+2] == 't')
			{
				
				break;
				
			}
			
			else
			{
				studentName[iterator2] = (char)queryInput[iterator];
				iterator++;
				iterator2++;
			 
			}
			
			
			
		}
		printf("%s", studentName);
		
		iterator += 6;
		while(iterator < strlen(queryInput) + 1)
		{
			courseName[iterator3] = (char) queryInput[iterator];
			iterator ++;
			iterator3 ++;
		}
		
		printf("%s" , courseName);
		
		
	
		
	}
	
	//Where is StudentName at Time on Day
	
	if(queryInput[2] == 'e')
	{
		
		printf("2");
	}
	

	
	
}