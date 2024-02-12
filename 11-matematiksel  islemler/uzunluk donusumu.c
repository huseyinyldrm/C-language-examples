#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float cm,metre,km;
	
	printf("Uzunlugu cm cinsinden giriniz:");
	scanf("%f",&cm);
	
	metre=cm/10000;  //donusumler//
	km=cm/1000000;
	
	printf("Metre cinsinden uzunluk=%.3f m \n",metre);
	printf("KM cinsinden uzunluk=%.6f km\n",km);
	return 0;
}
