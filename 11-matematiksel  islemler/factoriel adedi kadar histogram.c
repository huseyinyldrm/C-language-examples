#include <stdio.h>
#include <stdlib.h>

int factorial(int sayi){
	if(sayi==0 || sayi==1){
		return 1;
	}
	else{
		return sayi*factorial(sayi-1);
	}
}
int main(int argc, char *argv[]) {
	
	int N,i,k;
	
	printf("Lutfen bir N sayisi giriniz:");
	scanf("%d",&N);

	
	for(i=0; i<=N; i++){
		printf("%d!=%d ",i,factorial(i));
	
	
	for(k=0; k<factorial(i); k++){
		printf("#");
	}
	printf("\n");
	
    } //dis for bitisi

return 0;
}
