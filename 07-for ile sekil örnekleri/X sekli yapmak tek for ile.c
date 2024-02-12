#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,k,l;
	
	for(i=0; i<169; i++){
		if(i%13==0){
			printf("\n");
		}
		
		k=i/13;
		l=i%13;
		if(k==l || k+l==12){
			printf(" * ");
		}
		else{
			printf(" 0 ");
		}
	}
	return 0;
}
