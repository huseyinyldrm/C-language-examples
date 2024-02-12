#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");	
	int benimDizim[]={3,8,1,7,2,9,11,4};
	int en_buyuk_deger=benimDizim[0];
	int konum=0;
	int indeks;
	
	int boyut=sizeof(benimDizim)/sizeof(benimDizim[0]);
	
	for(indeks=0; indeks<boyut; indeks++){
		
		if(benimDizim[indeks]>en_buyuk_deger){
			en_buyuk_deger=benimDizim[indeks];
			konum=indeks;
		}
	}
	printf("Dizinin en buyuk elemani %d indeksli konumda bulunan %d degeridir.\n",konum,en_buyuk_deger);

	return 0;
}
