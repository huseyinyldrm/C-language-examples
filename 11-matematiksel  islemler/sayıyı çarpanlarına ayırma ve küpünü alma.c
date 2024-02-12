#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	// deðiþken isimlerine dikkat hepsi farkli
	//klavyeden girilen sayinin carpanlarina ayirma
	
	int Sayi,i;
	printf("Sayi giriniz:");
	scanf("%d",&Sayi);
	
	for(i=1;i<=Sayi;i++){
		if(Sayi%i==0){
			printf("%d\n",i);
		}
	}
	
	printf("\n-------------------------------------------------------------------\n");
	//klavyeden girilen sayinin kupunu alan program//
	
	int sayi;
	int kup;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	kup=sayi*sayi*sayi;
	
	printf("Girilen sayinin kupu:%d",kup);
	
	return 0;
}
