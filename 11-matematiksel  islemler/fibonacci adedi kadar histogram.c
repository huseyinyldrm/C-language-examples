#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main(int argc, char *argv[]) {
	
	int M,j,l;
	
	printf("Lutfen bir M sayisi giriniz:");
	scanf("%d",&M);
	
	for(j=1; j<=M; j++){
		printf("%d= %d ",j,fibonacci(j));
		
		for(l=1; l<=fibonacci(j); l++){
			printf("*");
		}
		printf("\n");
	} // diis  for bitisi //
	
return 0;
}
