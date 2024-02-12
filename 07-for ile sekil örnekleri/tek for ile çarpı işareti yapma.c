#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a[10][10]={0};
	int i,j;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			
			if(i==j || i+j==9)
			printf("*");
			else
			printf("#");
		}
		printf("\n");
	}
	printf("\n\n\n");
	
	int b;
	
	for(b=0; b<121; b++){
		
		int c=b%11;
    	int d=b/11;
    	
		if(b%11==0){
			printf("\n");
		}
		if(d==c|| c+d==10){
			printf("*");
		}
		else{
			printf("#");
		}
	}
	
	printf("\n\n\n");
	return 0;
}
