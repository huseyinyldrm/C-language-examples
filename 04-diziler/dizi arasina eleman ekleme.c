#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");		
	int eklenecek_sayi,eklenecek_indeks;
	int benim_dizim[]={3,4,1,9,6,8,2};
	int boyut=sizeof(benim_dizim)/sizeof(benim_dizim[0]);
	
	for(int indeks=0; indeks<boyut; indeks++){
		printf("%d ",benim_dizim[indeks]); // % d nin yanina bir bosluk birak ki dizinin arasinda bosluk olsun//
	}	
	
	printf("\n Eklenecek sayiyi giriniz:");
	scanf("%d",&eklenecek_sayi);
	printf("\n Sayinin hangi indekse eklenecegini belirtiniz:");
	scanf("%d",&eklenecek_indeks);
	
	for(int indeks=boyut-1; indeks>eklenecek_indeks; indeks--){
		benim_dizim[indeks]=benim_dizim[indeks-1]; 
	}// burada dizi boyutunun sabit kalmasi amaclanir . mesela 8 sayisini 3 numarali indekse eklersem sondaki 2 diziden cikarilir.//
	
	benim_dizim[eklenecek_indeks]=eklenecek_sayi;
	
	for(int indeks=0; indeks<boyut; indeks++){
		printf("%d ",benim_dizim[indeks]); // % d nin yanýna bir bosluk birak ki dizinin arasinda bosluk olsun//
	}
	
	

	return 0;
}
