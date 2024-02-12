#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyArray(int b[],int size)
{
	int j;
	for(j=0; j<size; j++){
		b[j]*=2;  // verilen dizi elemanlarini 2 ile carpan fonksiyondur.//
	}
}

void modifyElement(int e)
{
	printf("Value in modifyElement is : %d\n",e*=2); // istenilen dizi elemanini 2 ile carpar.//
}
int main(int argc, char *argv[]) {
	
	int a[SIZE]={0,1,2,3,4};
	int i;
	
	printf("The values of the original array are :\n ");
	
	for(i=0; i<SIZE; i++){
		printf("%3d",a[i]); // orijinal diziyi yazdirir.//
	}
	
	printf("\n********************************************\n");
	
	modifyArray(a,SIZE);
	printf("The values of the modified array are :");
	
	for(i=0; i<SIZE; i++){
		printf("%3d",a[i]); // orijinal diziyi 2 ile carpar//
	}
	
	printf("\nThe value of a[3] is after modifyArray function= %d\n",a[3]);
	
	modifyElement(a[3]);
	printf("The value of a[3] is = %d\n",a[3]);
	
	
	return 0;
}
