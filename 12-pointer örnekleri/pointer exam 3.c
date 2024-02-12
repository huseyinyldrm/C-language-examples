#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertTouppercase(char *sPtr)
{
	while(*sPtr!='\0'){  // if you want to use islower and toupper functions you have to include ctype.h dictionary !!! //
		if(islower(*sPtr)){
			*sPtr=toupper(*sPtr);
		}
		++sPtr;
	}
}

int main(int argc, char *argv[]) {
	
	char string[]= "characters and $32.98.";
	printf("The string before conversion is=%s",string);
	printf("\n\n");
	convertTouppercase(string);
	printf("\nThe string after conversion is=%s",string);
	
	return 0;
}
