#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i;
	
	for(i=1; i<=100; i++ ){
		if(i%10==0 || i%10==1 || i%9==1 && i>=50 || i>=50 && i%11==1){
			printf("# ");
		}
		else{
			printf("  ");
		}
		if(i%10==0){
			printf("\n");
		}
	}
	printf("\n.....................................................\n\n");
   	
	int j;
	for(j=1; j<=100; j++){
		if(j%10==0 || j%10==1 || j%9==1 && j<=50 || j<=50 && j%11==1){
			printf("# ");
		}
		else{
			printf("  ");
		}
		
		if(j%10==0){
			printf("\n");
		}
	}
	return 0;
}
