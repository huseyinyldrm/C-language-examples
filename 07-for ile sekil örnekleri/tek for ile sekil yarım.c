#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c;
	
	for(a=0; a<45; a++){
		if(a%9==0){
			printf("\n");
		}
		b=a%9;  //sutun
		c=a/9;  //satir
		if(b+c==4||b-c==4){
			printf("0");
		}
		else if(b+c<4 && c<4){
			printf("2");
		}
		else if(b-c>4 && c<4){
			printf("6");
		}
		else{
			printf("4");
		}
	}
		
	return 0;
}
