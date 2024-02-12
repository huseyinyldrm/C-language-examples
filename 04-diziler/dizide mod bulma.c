#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 10

/* 
-----------------------------------------------------------------------------------------------
Medyan= Veri kümesi kucukten buyuge siralandiginda ortadaki degerdir.
Eger kume sayisi tek ise tam ortadaki deger, cift sayi ise ortadaki iki sayinin ortalamasdir.
 Mod = Veri kumesinde en fazla gorulen sayidir.
 ----------------------------------------------------------------------------------------------
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int puan,j,h,enBuyuk=0,modDegeri=0;
	int i;
	int frek[10]={0};
	int dizi[SIZE];
	
	printf("\n%s\n%s\n%s\n","*****","MOD","*****");
	
	for(i=0; i<SIZE; i++){
		printf("Dizi elemanlarini giriniz:");
		scanf("%d",&dizi[i]);
	}
	
	for(puan=1; puan<=9; puan++){
		frek[puan]=0;
	}
	for(j=0; j<=9; j++){
		++frek[dizi[j]];
	}
	
	printf("\n%5s%5s%5s\n", "Dizi ","Frekans ","Histogram ");
	
	for(puan=1; puan<=9; puan++){
		printf("%3d%3d    ",puan,frek[puan]);
		if(frek[puan]>enBuyuk){
			enBuyuk=frek[puan];
			modDegeri= puan;
		}
		for(h=1; h<=frek[puan]; h++){
			printf("%c",'*');
		}
		printf("\n");
	}
	
	printf("Bu çalismada mod %d dir. %d tekrarlanmýstir.\n",modDegeri,enBuyuk);
	
	return 0;
}
