#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	float a,b,c;
	float kok1,kok2,imajiner;
	float diskriminant;
	
	printf("(aX^2+bX+c) seklindeki denklemin a,b,c katsayilarini giriniz:");
	scanf("%f%f%f",&a,&b,&c);
	
	diskriminant=(b*b)-(4*a*c);
	
	switch(diskriminant>0){
		
		case1://kök pozitifse
		
		kok1=(-b+sqrt(diskriminant))/(2*a);
		kok2=(-b-sqrt(diskriminant))/(2*a);
		
		printf("Iki adet ayrik ve gercel kok vardir:%.2f and %.2f",kok1,kok2);
		
		break;
		
		case 0:
			
		switch(diskriminant<0)
		{
		  //diskriminant pozitif deðilse
			case 1:
				
				kok1=kok2=-b/(2*a);
				imajiner=sqrt(-diskriminant)/(2*a);
				
				printf("Iki adet ayrik ve karmasik kok vardir:%.2f + i%.2f ve %.2f - i%.2f",kok1,imajiner,kok2,imajiner);
				
				break;
				
			case 0: //diskriminant 0 ise
				
				kok1=kok2=-b/(2*a);
				
				printf("Birbirine esit iki adet gercel kok vardir:%.2f ve %.2f",kok1,kok2);
				
				break;	
		}	
	}
	return 0;
}
