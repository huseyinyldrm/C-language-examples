#include <stdio.h>
#include <stdlib.h>

void piramid(int height)
{
	int i,j,k;
	
	for(i=1; i<=height; i++){
		for(j=1; j<=height-i; j++){
			printf(" ");
		}
		for(k=1; k<=2*i-1; k++){
			printf("*");
		}
		printf("\n");
	}
	
}
int main(int argc, char *argv[]) {
	
	int secim;
	printf("Bir sayi giriniz:");
	scanf("%d",&secim);
	printf("\n");
	piramid(secim);
	
	return 0;
}
