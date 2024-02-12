#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	
	for(a=0; a<121; a++){
		if(a%11==0){
			printf("\n");
		}
		
		b=a%11; //sutun
		c=a/11; //satir
		
		if(c==5 || b+c==5 || b-c==5 || c-b==5 || b+c==15){
			printf("*");
		}
		else if(c+b<5 && c<5){
			printf("0");
		}
		else if(c<5 && b-c>5){
			printf("1");
		}
		else if(c>5 && b+c>15){
			printf("2");
		}
		else if(c>5 && c-b>5){
			printf("3");
		}
		else if(c<5 && c+b>5 && b-c<5){
			printf("4");
		}
		else{
			printf("5");
		}
	}
	return 0;
}
