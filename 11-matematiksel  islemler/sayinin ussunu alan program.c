#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	double taban,kuvvet,sonuc;
	
	//kullanicidan iki sayi al//
	
	printf("Taban degerini giriniz:");
	scanf("%lf",&taban);
	
	printf("Kuvvet degerini giriniz:");
	scanf("%lf",&kuvvet);
	
	
	sonuc=pow(taban,kuvvet);//pow fonksiyonu us almaya yarar. iki parametre alir. math.h eklenmelidir//
	
	printf("(%.1lf)^(%.1lf)=(%.1lf)",taban,kuvvet,sonuc);
	return 0;
}
