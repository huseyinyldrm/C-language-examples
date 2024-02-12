#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
//uc basamakli rakamlari farkli sayilar kac tanedir//	
	int sayac=0;
	int i;    //uc basamakli sayiyi temsil eder//
	int a,b,c;    //basamaklar
	
	for (i=100;i<=999;i++){
		
		a=i/100;
		b=(i/10)%10;
		c=i%10;
		
		if(a!=b && a!=c && b!=c){
			sayac++;
			
		}
		
	}
	
	printf("%d",sayac);
	
	return 0;
}
