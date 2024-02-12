#include <stdio.h>
#include <stdlib.h>

int SayininKupunuHesapla(int Sayi)
{
	return (Sayi*Sayi*Sayi);
	
}

int main(int argc, char *argv[]) {
		
	int Sayi;
	int c;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&Sayi);
	
	c=SayininKupunuHesapla(Sayi);
	printf("%d sayisinin kupu= %d",Sayi,c);
	

	return 0;
}
