#include <stdio.h>
#include <stdlib.h>

void printCharacters(const char *sPtr)
{
	for(; *sPtr!='\0';sPtr++){ // warning this //
		printf("%c",*sPtr);
	}
}

int main(int argc, char *argv[]) {
	
	char string[]="print characters of a string";
	printf("The string is:\n");
	printCharacters(string);
	printf("\n");
	return 0;
}
