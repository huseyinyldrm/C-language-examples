#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	printf("\n---------------------------------------------------------\n");
	printf("\nV�cut-Kitle Endexi Hesaplama Program�na Ho�geldiniz\n");
	printf("\n---------------------------------------------------------\n");
	
	float boy,kilo;
	float vki=0;
	
	printf("L�tfen kilonuzu giriniz:");
	scanf("%f",&kilo);
	
	printf("\nL�tfen boyunuzu metre cinsinden  giriniz:");
	scanf("%f",&boy);
	
	vki=kilo/(boy*boy);
	printf("\nVK� De�eri:%.2f\n",vki);
	
	if(vki<18.5){
		printf("Sonu�: �deal kilonun alt�nda\n");
		printf("Biraz kilo alsan�z iyi olur.");
	}
	else if(vki>=18.5 && vki<=24.9){
		printf("Sonu�: �deal kiloda.\n");
		printf("Formunuzu b�yle korumaya devam edin.");
	}
	else if(vki>=25 && vki<=29.9){
		printf("Sonu�: ideal kilonun �st�nde.\n");
		printf("Biraz kilo verirseniz sizin i�in daha iyi olur.");
	}
	else if(vki>=30 && vki<=39.9){
		printf("Sonu�:ideal kilonun �ok �st�nde(obez).\n");
		printf("Kilolar�n�z sa�l���n�z i�in risk olu�turuyor.");
	}
	else{
		printf("Sonu�: �deal kilonun �ok �st�nde (morbit obez).\n");
		printf("�ok riskli bir evredesiniz , sa�l���n�z i�in kilolar�n�z� vermek zorundas�n�z!!!");
	}
	return 0;
}
