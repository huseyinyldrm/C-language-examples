#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	printf("\n---------------------------------------------------------\n");
	printf("\nVücut-Kitle Endexi Hesaplama Programýna Hoþgeldiniz\n");
	printf("\n---------------------------------------------------------\n");
	
	float boy,kilo;
	float vki=0;
	
	printf("Lütfen kilonuzu giriniz:");
	scanf("%f",&kilo);
	
	printf("\nLütfen boyunuzu metre cinsinden  giriniz:");
	scanf("%f",&boy);
	
	vki=kilo/(boy*boy);
	printf("\nVKÝ Deðeri:%.2f\n",vki);
	
	if(vki<18.5){
		printf("Sonuç: Ýdeal kilonun altýnda\n");
		printf("Biraz kilo alsanýz iyi olur.");
	}
	else if(vki>=18.5 && vki<=24.9){
		printf("Sonuç: Ýdeal kiloda.\n");
		printf("Formunuzu böyle korumaya devam edin.");
	}
	else if(vki>=25 && vki<=29.9){
		printf("Sonuç: ideal kilonun üstünde.\n");
		printf("Biraz kilo verirseniz sizin için daha iyi olur.");
	}
	else if(vki>=30 && vki<=39.9){
		printf("Sonuç:ideal kilonun çok üstünde(obez).\n");
		printf("Kilolarýnýz saðlýðýnýz için risk oluþturuyor.");
	}
	else{
		printf("Sonuç: Ýdeal kilonun çok üstünde (morbit obez).\n");
		printf("Çok riskli bir evredesiniz , saðlýðýnýz için kilolarýnýzý vermek zorundasýnýz!!!");
	}
	return 0;
}
