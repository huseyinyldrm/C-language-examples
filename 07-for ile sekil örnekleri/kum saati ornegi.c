#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayi,i,j;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++){
		for(j=1; j<=i-1; j++){
			printf(" ");
		}
		for(j=0; j<=(2*sayi)-2*i; j++){
			printf("*");
		}
		printf("\n");
	} // ust ucgeni yazdirir. !!! //
	
	for(i=1; i<=sayi-1; i++){
		for(j=1; j<=sayi-i-1; j++){
			printf(" ");
		}
		for(j=1; j<=(2*i)+1; j++){
			printf("*");
		}
		printf("\n");
	} // alt ucgeni yazdirir. !!! //
	
	
	
	return 0;
}
