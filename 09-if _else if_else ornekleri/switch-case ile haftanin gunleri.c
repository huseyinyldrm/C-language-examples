#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	   
   int gun1;
   printf("Haftanin gununu giriniz:");
   scanf("%d",&gun1);
   
   switch(gun1)
   {
    case 1:
   		printf("Pazartesi");
   		break;
   		
   	case 2:
   		printf("Sali");
   		break;
   			
   	case 3:
   		printf("Carsamba");
   		break;
   			
   	case 4:
   		printf("Persembe");
   		break;
   					
 	case 5:
   		printf("Cuma");			
		break;
   						
   	case 6:
   		printf("Cumartesi");
  		break;
   							
 	case 7:
 		printf("Pazar");
  		break;
   								
 	default:
 	printf("Gecerli deger giriniz!!!!");
   	
   }   
// DÝKKKKKKAT =case den sonra bir boþluk birakilmali ve iki nokta ust utse koyulup break; eklenmelidir //
// not = case lerde or kullanimi yoktur. yani case (1||2||3): gibi bir kullanim yoktur //



// ustteki ornek su sekilde de yapilabilir: //


   printf("\n\n");
   
   int gun2;
   printf("Lutfen haftanin gununu giriniz:");
   scanf("%d",&gun2);
   
   switch (gun2){
   	case 1:
   	case 2:
   	case 3:
   	case 4:
   	case 5:
   	
   		printf("Haftaici...");
   		break;
   	case 6:
   	case 7:
	   printf("Haftasonu.....");	
   		
  	default :
  		printf("Gecerli bir deger giriniz....");
   			
   }
   

	return 0;
}
