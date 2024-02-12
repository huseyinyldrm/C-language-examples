#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a[10]={1,23,4,56,6,7,5,8,5,799};
	int i,hold;
	
	for(i=0; i<10; i++){
		if(a[i]>a[i+1]){
			hold=a[i];
			a[i]=a[i+1];
			a[i+1]=hold;
		}
	
	}
	printf("\n**************************************\n");
	printf("Bigger value in this array = %d",hold);
	printf("\n**************************************\n");
	return 0;
}
