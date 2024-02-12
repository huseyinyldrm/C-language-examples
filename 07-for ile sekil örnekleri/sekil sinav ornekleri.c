#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int m[10][10];
	int j,k;
	
	for(k=0; k<10; k++){
		for(j=4; j<10; j++){
			if(j==k || j+k==8 || j==4 || k==4){
				printf("#");
			}
			if(j<4 && j<k && k<4){
				printf("1");
			}
			if(j<4 && j>k && k<4){
				printf("2");
			}
			if(j>4 && j+k<8 && k<4){
				printf("3");
			}
			if(j>4 && j+k>8 && k<4){
				printf("4");
			}
			if(j>4 && j>k && k>4){
				printf("5");
			}
			if(j>4 && j<k && k>4){
				printf("6");
			}
			if(j<4 && j+k>8 && k>4){
				printf("7");
			}
			if(j<4 && j+k<8 && k>4){
				printf("8");
			}
		}
		printf("\n");
	}
	
	printf("\n----------------------------------------------------------------------------------------------------\n");
	
	int a,b,c;
	
	for(a=0; a<81; a++){
		if(a%9==0){
			printf("\n");
		}
		if(a%9>=4){
			b=a%9; //sutun
			c=a/9; //satir
			
			if(b==c || b+c==8 || a%9==4 || c==4){
				printf("#");
			}
			else if(a%9>4 && b+c<8){
				printf("2");
			}
			else if(b>c && b+c>8){
				printf("4");
			}
			else if(a%9>4 && b<c){
				printf("6");
			}
		}
	}
	
	
	
	printf("\n----------------------------------------------------------------------------------------------------\n");
	
	
	
	int x,y,z;
	
	for(x=0; x<81; x++){
		if(x%9==0){
			printf("\n");
		}
		
		y=x%9; //sutun
		z=x/9; //satir
		
		if(y==z || y+z==8){  // sutun ve satirin bir eksigi toplamin en fazla oldugu sayidir.//
			printf("0");
		}
		else if(y<z && y+z<8){
			printf("2");
		}
		else if(y<z && y+z>8){
			printf("4");
		}
		else if(y>z && y+z<8){
			printf("6");
		}
		else if(y>z && y+z>8){
			printf("8");
		}
	}
	
	
	printf("\n----------------------------------------------------------------------------------------------------\n");
	
	
	int q,w,e;
	
	for(q=0; q<100; q++){
		if(q%10==0){
			printf("\n");
		}
		
		w=q%10; // sutun
		e=q/10; // satir
		
		if(w==0 || w==9){
			printf("0");
		}
		else if(w==e && e<5 || w+e==9 && e<5){
			printf("0");
		}
	
		else{
			printf("#");
		}
	}
	
	
	printf("\n----------------------------------------------------------------------------------------------------\n");
	
	int h,n,l;
	
	for(h=0; h<100; h++){
		if(h%10==0){
			printf("\n");
		}
		
		n=h%10; // sutun
		l=h/10; // satir
		if(n>=2 && n<=7  && l>=2 && l<=7 || l>=2 && l<=7 && n>=2 && n<=7){
			printf("0");
		}
		else{
			printf("*");
		}
	}
	
	printf("\n----------------------------------------------------------------------------------------------------\n");
	
	int t,g,v;
	
	for(t=0; t<81; t++){
		if(t%9==0){
			printf("\n");
		}
		g=t%9; // sutun
		v=t/9; //satir
		
		if(g==v && g<5 || g+v==8 && g>=5 || g==4 && v>=4){
			printf("*");
		}
		else{
			printf("#");
		}
	}
	
	
	printf("\n----------------------------------------------------------------------------------------------------\n");
	
	 
	int p,r,s;
	
	for(p=0; p<100; p++){
		if(p%10==0){
			printf("\n");
		}
		
		r=p%10; // sutun
		s=p/10; // satir
		
		if(r==0 || r==9 || s==0 || s==9){  // 0 icin
			printf("0");
		}
		else if(r==1 && s>=1 && s<=8 || r==8 && s>=1 && s<=8 || s==1 && r>=1 && r<=8 || s==8 && r>=1 && r<=8){  // 1 icin
			printf("1");
		}
		else if(r==2 && s>=2 && s<=7 || r==7 && s>=2 && s<=7 || s==2 && r>=2 && r<=7 || s==7 && r>=2 && r<=7){ //2 icin 
			printf("2");
		}
		else if(r==3 && s>=3 && s<=6 || r==6 && s>=3 && s<=6 || s==3 && r>=3 && r<=6 || s==6 && r>=3 && r<=6){ // 3 icin 
			printf("3");
		}
		else if(r==4 && s>=4 && s<=5 || r==5 && s>=4 && s<=5 || s==4 && r>=4 && r<=5 || s==5 && r>=4 && r<=5){ //4 icin
			printf("4"); // bunun denklemini yazmaya gerek yok sadece else yeterli olur. //
		}
	}

	
	printf("\n----------------------------------------------------------------------------------------------------\n");


	return 0;
}
