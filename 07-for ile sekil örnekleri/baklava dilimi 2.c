#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,l,k;
	for(i=0; i<121; i++){
		if(i%11==0){
			printf("\n");
		}
		
		k=i%11;  // sutun
		l=i/11;  // satir
		
		if(k+l==5 || k-l==5 || l-k==5 || k+l==15){
			printf("*");
		}
		else if(k+l>5 && k-l<5 && k+l<15 && l-k<5){
			printf("1");
		}
		else if(k<5){
			printf("2");
		}
		else{
			printf("8");
		}
	}
	return 0;
}
