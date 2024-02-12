#include <stdio.h>
#include <stdlib.h>


void baklava(int n)
{
	int i,j;
	// üst kisim cizimi //
	for(i=0; i<n; i++){
		for(j=0; j<n-i-1; j++){
			printf(" ");
		}
		for(j=0; j<2*i+1; j++){
			printf("*");
		}
	  printf("\n");
	}
	
	// alt kisim cizimi //
	for(i=n-2; i>=0; i--){
		for(j=0; j<n-i-1; j++){
			printf(" ");
		}
		for(j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}

}

int main(int argc, char *argv[]) {
	
	
	int n;
	
	printf("Baklava dilimi icin bir sayi giriniz:");
	scanf("%d",&n);
	baklava(n); 
	
	

	return 0;
}
