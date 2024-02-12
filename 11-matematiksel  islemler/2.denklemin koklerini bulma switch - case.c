#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {

	
   float x,y,z;
   float kok_1,kok_2,imj;
   float digerDiskriminant;
   
   printf("(Xx^2+yx+z) seklindeki denklemin x,y,z katsayilarini giriniz: " );
   scanf("%f%f%f",&x,&y,&z);
   
   digerDiskriminant=(y*y)-(4*x*z);
   
   switch (digerDiskriminant>0){
   	
   	case 1: // kök pozitifse //
   		kok_1=(-y+sqrt(digerDiskriminant))/(2*x);
   		kok_2=(-y-sqrt(digerDiskriminant))/(2*x);
   		
   		printf("Iki adet ayrik ve gercel kok vardir:%.2f ve %.2f",kok_1,kok_2);
   		break;
   	case 0:
   	
	   
	switch(digerDiskriminant<0){
		
		case 1:
			kok_1=kok_2=-y/(2*x);
			imj=sqrt(-digerDiskriminant)/(2*x);
			printf("Iki adet ayrik ve karmasik kok vardir:%.2f + i%.2f ve %.2f - i%.2f",kok_1,imj,kok_2,imj);
			break ;
		
		case 0:  // diskriminant 0 ise //
			kok_1=kok_2=-y/(2*x);
			printf("Birbirine esit iki adet gercel kok vardir:%.2f ve %.2f",kok_1,kok_2);
			break;
	}   	
	   	
   }
	return 0;
}
