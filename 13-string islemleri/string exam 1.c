#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	printf("%s\n%s%s\n%s%s\n\n","According to isdigit:",isdigit('8') ? " 8 is a ": "8 is not a","digit",
	        isdigit('#')? " # is a ": "# is not a","digit");
	
	printf("%s\n%s%s\n%s%s\n\n","According to alpha:",isalpha('A') ? " 8 is a ": "8 is not a","alpha",
	        isdigit('5')? " # is a ": "# is not a","alpha");
			
	printf("%s\n%s%s\n%s%s\n\n","According to isalnum:",isalnum('B') ? " 8 is a ": "8 is not a","digit or a letter",
	        isdigit('*')? " # is a ": "# is not a","digit or a letter");        
	        
	printf("%s\n%s%s\n%s%s\n\n","According to isxdigit:",isxdigit('8')? " 8 is a ": "8 is not a"," hexadecimal digit",
	        isdigit('F')? " # is a ": "# is not a ","hexadecimal digit");
	
	printf("\n------------------------------------------------------------------------------\n");
	
	
	
	printf("%s\n%s%s\n%s%s\n\n","According to islower:",islower('8') ? " 8 is a ": "8 is not a","lowercase letter",
	        islower('p')? " p is a ": "p is not a","lowercase letter");
	        
	printf("%s\n%s%s\n%s%s\n\n","According to isupper:",isupper('A') ? " A is a ": "A is not a","uppercase letter",
	        isupper('B')? " B is a ": "B is not a","uppercase letter");
	        
	printf("%s%s\n","Uconverted to uppercase is :",toupper('c'));
	        
	        
	        
	printf("\n------------------------------------------------------------------------------\n");
	
	
	
	printf("%s\n%s%s\n%s%s\n\n","According to isspace:",isspace('\n') ? " \n is a ": "\n is not a","whit space character",
	        isspace('#')? " # is a ": "# is not a","whit space character");
	        
	printf("%s\n%s%s\n%s%s\n\n","According to iscntrl:",iscntrl('\n') ? " \n is a ": "\n is not a","control character",
	        iscntrl('#')? " # is a ": "# is not a","control character");
	        
	printf("%s\n%s%s\n%s%s\n\n","According to ispunct:",ispunct(';') ? " 8 is a ": "8 is not a","punctuation character",
	        ispunct('$')? " # is a ": "# is not a","punctuation character");
	
	
	
	return 0;
}
