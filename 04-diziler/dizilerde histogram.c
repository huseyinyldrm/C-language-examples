#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 10

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Girilen Dizi Elemanlarinin Adedi Kadar Histogram Uygulama");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int a[SIZE];
	int uzunluk=sizeof(a)/sizeof(a[0]);
	int i,j;
	
	for(i=0; i<SIZE; i++){
		printf("Dizi Elemanlarini Giriniz:");
		scanf("%d",&a[i]);
	}
	
	printf("%s%10s%10s\n","Dizi","Element","Histogram");
	
	for(i=0; i<SIZE; i++){
		printf("%d   -> %5d        ",i,a[i]);
		
		for(j=1; j<=a[i]; j++){
			printf("%c",'*');
		}
		printf("\n");
	}
	
	return 0;
}
