#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	 
	int a,b,c;
	 
	for(a=0; a<81; a++){
		if(a%9==0){
			printf("\n");
		}
		
		b=a%9; //sutun
		c=a/9; //satir
		
		if(b==c || b+c==8 || b==4 || c==4){
			printf("*");
		}
		else if(b<c && b+c<8 && a%9<4 && c<=3){
			printf("0");
		}
		else if(b>c && b+c<8 && a%9<4){
			printf("1");
		}
		else if(b>c && b+c<8 && a%9>4){
			printf("2");
		}
		else if(b>c && b+c>8 && a%9>4 && c<=3){
			printf("3");
		}
		else if(b>c && b+c>8 && a%9>4 && c>=5){
			printf("4");
		}
		else if(b<c && b+c>8 && a%9>4){
			printf("5");
		}
		else if(b<c && b+c>8 && a%9<4){
			printf("6");
		}
		else if(b<c && b+c<8 && a%9<4){
			printf("7");  // burayi yazmaya gerek yoktur. Sadece else ile de olusabilir. //
		}
	}
	
	printf("\n\n-----------------------------------------------------------------------------------------------\n\n");
	
	int d,e,f;
	
	
	for(d=0; d<100; d++){
		if(d%10==0){
			printf("\n");
		}
		
		e=d%10; //sutun
		f=d/10; //satir
		
		if(e==0 || e==9){
			printf("*");
		}
		else if(e==f && f<5 || e+f==9 && f<5){
			printf("*");
		}
		else if(e>f && e+f<=8 && d%10<=4){
			printf("3");
		}else if(e>f && e+f<=8 && d%10>4){
			printf("4");
		}
		else if(e<f && e+f<=8 || e<f && e+f>=8 && d%10<=4 ){
			printf("1");
		}
		else if(e>f && e+f>=8 || e<=f && e+f>=8 && d%10>4){
			printf("2");  // bunu yazmaya gerek yoktu sadece else de  olurdu.//
		}
	}
	
	
	return 0;
}
