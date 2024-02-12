#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int g,h,i;
	
	for(g=0; g<81; g++){
		if(g%9==0){
			printf("\n");
		}
		
		h=g%9; //sutun
		i=g/9; //satir
		
		if(h==i || h==0 || h==8 || h+i==8 || i==0 || i==8){
			printf(" * ");
		}
		else if(h<i && h+i<8 || h>i && h+i>8){
			printf("   ");
		}
		else if(h>i && h+i<8 || h<i && h+i>8){
			printf("   ");
		}
		else{
			printf(" # ");
		}
	}
	
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int m,k,l;
	
	for(m=0; m<81; m++){
		if(m%9==0){
			printf("\n");
		}
		
		k=m%9;  //sutun
		l=m/9;  //satir
		
		if(k==0 || k==8 || l==0 || l==8){
			printf("* ");
		}
		else if(k+l<8 && l<8){
			printf("$ ");
		}
		else if(k<=l && k+l>8 || k>l && k+l>8){
			printf("? ");
		}
		else{
			printf("# ");
		}
	}
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int p,r,s;
	
	for(p=0; p<81; p++){
		if(p%9==0){
			printf("\n");
		}
		r=p%9;  // sutun
		s=p/9;  // satir
		
		if(s%2==0){
			printf("* ");
		}
		else{
			printf("# ");
		}
	}
	
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int q;
	
	for(q=0; q<81; q++){
		if(q%9==0){
			printf("\n");
		}
		if(q%2==0){
			printf("* ");
		}
		else{
			printf("# ");
		}
	}
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int z,y,t;
	
	for(z=0; z<90; z++){
		
		if(y==9){
			printf("\n");
		}
		y=z%10;  //sutun
		t=z/10;  //satir
		
		if(t<y){
			printf("*");
		}
		else{
			printf(" ");
		}
	
	}
	
	
	return 0;
}
