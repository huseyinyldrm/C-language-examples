#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int basamak,n,sayi;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi>1){
		sayi/=10;
		basamak++;
	}
	
	printf("Girilen sayi %d basamaklidir.",basamak);
	
	
	return 0;
}
