#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
		printf("\n------------------------------\n");
	
	char string1[20];
	char string2[]="string literal";
	int y;
	
	printf("Enter a string:");
	scanf("%s",string1);
	
	printf(" string1 is :%s\n string2 is:%s\n"
	" string1 with spaces between characters is:",string1,string2);
	
	for(y=0; string1[y]!='\0'; y++){
		printf("%c ",string1[y]);
	}
	
	printf("%\n");
	
	
	return 0;
}
