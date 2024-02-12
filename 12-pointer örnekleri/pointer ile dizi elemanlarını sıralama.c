#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int *const array,const int size){
	void swap(int *element1Ptr, int *element2Ptr);
	
	int pass,j;
	
	for(pass=0; pass<SIZE; pass++){
		for(j=0; j<SIZE; j++){
			if(array[j]>array[j+1]){
				swap(&array[j],&array[j+1]);
			}
		}
	}
}

void swap(int *element1Ptr,int *element2Ptr)
{
	int hold=*element1Ptr;
	*element1Ptr=*element2Ptr;
	*element2Ptr=hold;
}

int main(int argc, char *argv[]) {
	
	int a[SIZE]={2,3,4,5,6,7,8,9,0,11};
	int i;
	
	printf("Data items in original order \n");
	
	for(i=0; i<SIZE; i++){
		printf("%4d",a[i]);
	}
	
	bubbleSort(a,SIZE);
	
	printf("\n Data items in ascending order\n");
	
	for(i=0; i<SIZE; i++){
		printf("%4d",a[i]);
	}
	
	printf("\n");
	
	return 0;
}
