#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c;
	
	for(a=0; a<121; a++){
		if(a%11==0){
			printf("\n");
		}
		
		b=a%11;  //sutun
		c=a/11;  //satir
		
		if(c==5 || b+c==5 || b+c==15 || c==1 && b%11==6 || c==2 && b%11==7 || c==3 && b%11==8 ||
		c==4 && b%11==9 || c==6 && b%11==1 || c==7 && b%11==2 || c==8 && b%11==3 || c==9 && b%11==4){
			printf(" . ");
		}
		else if(b%11<5 && c<5 && b+c<5){
			printf(" 0 ");
		}
		else if(b%11==0 && c>5 || b%11==1 && c>6 || b%11==2 && c>7 || b%11==3 && c>8 || b%11==4 && c>9){
			printf(" 3 ");
		}
		else if(b+c>15 && c>5){
			printf(" 2 ");
		}
		else if(b%11==6 && c<1 || b%11==7 && c<2 || b%11==8 && c<3 || b%11==9 && c<4 || b%11==10 && c<5){
			printf(" 1 ");
		}
		else if(b+c>5 && c<5){
			printf(" 4 ");
		}
		else{
			printf(" 5 ");
		}
	}
/* program ciktisi:
	
 0  0  0  0  0  .  1  1  1  1  1
 0  0  0  0  .  4  .  1  1  1  1
 0  0  0  .  4  4  4  .  1  1  1
 0  0  .  4  4  4  4  4  .  1  1
 0  .  4  4  4  4  4  4  4  .  1
 .  .  .  .  .  .  .  .  .  .  .
 3  .  5  5  5  5  5  5  5  .  2
 3  3  .  5  5  5  5  5  .  2  2
 3  3  3  .  5  5  5  .  2  2  2
 3  3  3  3  .  5  .  2  2  2  2
 3  3  3  3  3  .  2  2  2  2  2

*/
	
	
	
	return 0;
}
