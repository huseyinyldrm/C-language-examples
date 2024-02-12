#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void playBits(unsigned value)
{
	unsigned c;
	unsigned playMask=1<<31;
	
	printf("%10u : ",value);
	
	for(c=1; c<=32; c++){
		putchar(value & playMask ? '1': '0');
		value<<=1;
		
		if(c%8==0){
			putchar(' ');
		}
	}
	putchar('\n');
}
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	unsigned a=255;
	unsigned b=6;

	
	printf("Ýlk girilen deger   :");
	playBits(a);
	
	printf("\nÝkinci verilen deger:");
	playBits(b);
	
	printf("\n&  ile olusan deger: ");
	playBits(a&b);
	
	printf("\n| ile olusan deger:  ");
	playBits(a|b);
	
	printf("\n^ ile olusan deger:  ");
	playBits(a^b);
	
	printf("\n~ ile olusan a degeri:  ");
	playBits(~a);
	
	printf("\n~ ile olusan b degeri:  ");
	playBits(~b);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
