#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	readFile("testFile.txt.txt");
	
}

int readFile(char* path)
{
	
	FILE *fileIn;
    char *line = NULL;
    size_t length = 0;
    size_t read;
	
   fileIn = fopen(path , "r");
    if (fileIn == NULL)
        exit(EXIT_FAILURE);

		
   while ((read = getline(&line, &length, fileIn)) != -1) {
	   
        printf("%s", line);
    }
	
   free(line);
   
}

int createDoublyLinkedList()
{
	
	
	
	
}

int createFile()
{
	
	File *fileOut;
	
	
}