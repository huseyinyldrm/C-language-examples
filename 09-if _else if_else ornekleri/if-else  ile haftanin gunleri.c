#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	   
	int gun;
   printf("Gunun,haftanin kacinci gun oldugunu giriniz(1-7):");
   scanf("%d",&gun);
    
   if(gun==1){
   	printf("PAZARTESI");
   }
   else if(gun==2){
   	printf("SALI");
   }
   else if(gun==3){
   	printf("CARSAMBA");
   }
   else if(gun==4){
   	printf("PERSEMBE");
   }
   else if(gun==5){
   	printf("CUMA");
   }
   else if(gun==6){
   	printf("CUMARTESI");
   }
   else if(gun==7){
   	printf("PAZAR");
   }
   else{
   	printf("Lutfen gecerli bir deger giriniz!!!!!");
   }

	return 0;
}
