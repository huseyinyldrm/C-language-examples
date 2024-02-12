#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned value)
{
	unsigned c;
	unsigned displayMask=1<<31;
	printf("%10u= ",value);
	for(c=1; c<=32; c++){
		putchar(value & displayMask? '1':'0');
		value<<=1;
		
		if(c%8==0){
			putchar(' ');
		}
	}
	putchar('\n');
}

int main(int argc, char *argv[]) {
	unsigned number1=960;
	printf("\nThe result of left shifting:\n");
	displayBits(number1);
	printf("8 bit position using the left shift operator << is\n");
	displayBits(number1<<8);
	
	printf("\n\n-----------------------------------------------\n\n");
	
	printf("The result of right shifting:\n");
	displayBits(number1);
	printf("8 bit position using the right operator >> is \n");
	displayBits(number1>>8);
	
	return 0;
}
