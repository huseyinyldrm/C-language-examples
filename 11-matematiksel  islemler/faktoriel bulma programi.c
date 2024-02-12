#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	
   printf("\n............faktoriyel bulma kullanimi ................\n");

   printf("\n\nGirilen sayinin faktoriyelini bulan program\n\n");
   int Sayi,adim,islem=1;
  
   printf("Bir sayi giriniz:");
   scanf("%d",&Sayi);
  
   for(adim=1; adim<=Sayi; adim++)
   {
    	islem*=adim;
   }
   printf("%d sayisinin faktoriyeli= %d",Sayi,islem);

	return 0;
}
