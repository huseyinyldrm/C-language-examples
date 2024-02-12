#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int sayi1,sayi2;
	
	printf(" Iki sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	
	if(sayi1==sayi2){
		printf(" Iki sayi esittir.",sayi1,sayi2);
	}
	
	if(sayi1!=sayi2){
		printf(" Iki sayi esit degildir.",sayi1,sayi2);
	}
	
	return 0;
}
