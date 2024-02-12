#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void displayBits(unsigned value) // buradaki fonksiyon standarttir. ÇOK ÖNEMLÝDÝR!!!!!!!!!!
{
	unsigned c;
	unsigned displayMask=1<<31;
	printf("%10u = ",value);
	
	for(c=1; c<=32; c++){
		putchar(value & displayMask?'1':'0');
		
		value<<=1;
		
		if(c%8==0){
			putchar(' ');
		}
	}
	putchar('\n');
}
int main(int argc, char *argv[]) {
	
	unsigned x;
	printf("Enter an unsigned intager:");
	scanf("%u",&x);
	displayBits(x);
	
	
	
	return 0;
}
