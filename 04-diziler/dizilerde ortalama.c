#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 10

void ortalama(int dizi[])
{
	int i;
	int total=0;
	float ort=0;
	
	for(i=0; i<SIZE; i++){
		total=total+dizi[i];
	}
	
	ort=(float)total/SIZE;
	printf("\n\nGirilen dizinin ortalamasi=%.2f",ort);
	
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	printf("\n..........Dizinin Ortalamasini Bulma............\n");

	int a[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++){
		printf("Dizi elemanlarini giriniz:");
		scanf("%d",&a[i]);
	}
	
	ortalama(a);
	
	
	
	
	return 0;
}
