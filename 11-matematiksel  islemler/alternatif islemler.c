#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {

	int sayi1,sayi2;
	int toplam,fark,carpim,mod;
	float bolum;
	 
	printf("Birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("Ýkinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carpim=sayi1*sayi2;
	mod=sayi1%sayi2;
	bolum=(float)sayi1/sayi2;
	
	printf("\n------------------------------------------\n");
	printf("Sayilarin Toplami=%d\n",toplam);
	printf("Sayilarin Farki =%d\n",fark);
	printf("Sayilarin Carpimi=%d\n",carpim);
	printf("Sayilarin Modu=%d\n",mod);
	printf("Sayilarin Bolumu=%f\n",bolum);
	return 0;
}
