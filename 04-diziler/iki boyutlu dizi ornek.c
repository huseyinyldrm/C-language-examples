#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void printArray(const int a[2][3]);
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int array1[2][3]={{1,2,3},{4,5,6}};
	int array2[2][3]={1,2,3,4,5};
	int array3[2][3]={{1,2},{4}};
	
	printf("Birinci dizinin yazimi=\n");
	printArray(array1);
	printf("Ýkinci dizinin yazimi=\n");
	printArray(array2);
	printf("Üçüncü dizinin yazimi=\n");
	printArray(array3);
	return 0;
}

void printArray(const int a[2][3])
{
	int i,j;
	
	for(i=0; i<=1; i++){
		for(j=0; j<=2; j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
