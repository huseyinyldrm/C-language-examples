#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void Deger_Arttir(int a)
{
	static int b=0;
	printf("%d ",b);
	b+=a;
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
   printf("\n...........static belirtecinin kullanimi ................\n");  
   
   Deger_Arttir(3);
   Deger_Arttir(3);
   Deger_Arttir(3);
   Deger_Arttir(3);
   

	return 0;
}
