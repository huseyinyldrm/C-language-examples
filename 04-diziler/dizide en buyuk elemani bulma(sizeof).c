#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int benimDizim[]={1,2,3,5,6,8,100,0};
	int en_buyuk_deger=benimDizim[0];
	int konum=0;
	
	int boyut=sizeof(benimDizim)/sizeof(benimDizim[0]);
	
	for(int indeks=0; indeks<boyut; indeks++){
		
		if(benimDizim[indeks]>en_buyuk_deger){
			en_buyuk_deger=benimDizim[indeks];
			konum=indeks;
		}
	}
	
	printf("Dizinin en büyük elemani %d indeksli konumda bulunan %d degeridir.\n",konum,en_buyuk_deger);
	
	return 0;
}
