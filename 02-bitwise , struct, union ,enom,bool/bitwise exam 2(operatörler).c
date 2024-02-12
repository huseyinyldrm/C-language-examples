#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void displayBits(unsigned value)
{
	unsigned c;
	unsigned displayMask=1<<31;
	printf("%10u= ",value);
	
	for(c=1; c<=32; c++){
		putchar(value & displayMask ?'1':'0'); // buraya dikkat!!!!!!//
		value<<=1;
		if(c%8==0){
			putchar(' ');
		}
		
	}
	putchar('\n');
}
int main(int argc, char *argv[]) {
	unsigned number1;
	unsigned number2;
	unsigned mask;
	unsigned setBits;
	
	
	printf("\n--------------------------------------------------\n");
	number1=65535;
	mask=1;
	printf("The result of combining the fallowing:\n");
	displayBits(number1);
	displayBits(mask);
	printf("Using the bitwise AND operator & is=\n ");  // 1. kullanim & kullanimi(ve baðlaci gibi sadece 1v1 oluca 1 degilse 0 !!!) //
	displayBits(number1 & mask);
	
	printf("\n\n--------------------------------------------------\n\n");
	
	number1=15;
	setBits=241;
	printf("The result of combining the fallowing:\n");
	displayBits(number1);
	displayBits(setBits);
	printf("Using the bitwise OR operator | is=\n ");  // 2. kullanim | kullanimi(veya baglacý gibi sadece 0 ^0 olursa 0 degilse 1!!) //
	displayBits(number1 | setBits); 
	
	printf("\n\n--------------------------------------------------\n\n");
	
	number1=139;
	number2=199;
	printf("The result of combining the fallowing:\n");
	displayBits(number1);
	displayBits(number2);
	printf("Using the bitwise exclude OR operator ^ is= \n");  // 3. kullanim ^ kullanimi( ya da baglacý gibi ayný ise 0 degilse 1 yapar) //
	displayBits(number1^number2);
	 
	printf("\n\n--------------------------------------------------\n\n");
	
	number1=21845;
	printf("The one's komplament of\n"); // 4. kullanim ~ kullanimi ( 0 ise 1 , 1 ise 0 yapar!!!) //
	displayBits(number1);
	printf("is\n");
	displayBits(~number1);
	
	printf("\n\n--------------------------------------------------\n\n");
	return 0;
}
