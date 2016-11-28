#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	query("Where is Tim Chu at 9:00 on Monday");
	
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
		
		
		int iterator = 9;
		int iterator2 =0;
		int iterator3 = 0;
		int iterator4 = 0;
		char studentName[1000];
		char time[10000];
		char day[1000];
		
		while(1 < 2)
		{
			
			if(queryInput[iterator] == ' ' && queryInput[iterator+1] == 'a' && queryInput[iterator+2] == 't' && queryInput[iterator+3] == ' ')
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
		iterator += 4;
		while(1 < 2)
		{
			
			if(queryInput[iterator] == ' ' && queryInput[iterator+1] == 'o' && queryInput[iterator+2] == 'n' && queryInput[iterator+3] == ' ')
			{
				
				break;
				
			}
			else
			{
			
				time[iterator3] = (char)queryInput[iterator];
				iterator++;
				iterator3++;
				
			}
		}
		iterator += 4;
		while(iterator < strlen(queryInput) + 1)
		{
			day[iterator4] = (char) queryInput[iterator];
			iterator ++;
			iterator4 ++;
		}
			printf("%s", studentName);
			printf("\n%s", time);
			printf("\n%s", day);
		
		
	}
	

	
	
}