#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	int i,sayi;
	printf("Carpanlari hesaplanacak sayiyi giriniz:");
	scanf("%d",&sayi);
	
	printf("%d sayisinin tum carpanlari:\n",sayi);
	
	for(i=1;i<=sayi;i++){
		if(sayi%i==0){
			printf("%d ",i);
		}
	}
	return 0;
}
