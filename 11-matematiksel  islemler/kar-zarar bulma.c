#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int maliyet,satis_bedeli,kar_zarar;
   printf("Satis bedelini giriniz:");
   scanf("%d",&satis_bedeli);
   
   printf("Maliyet hesabini giriniz:");
   scanf("%d",&maliyet);
   printf("\n\n");
   if(satis_bedeli>maliyet){
   	kar_zarar=satis_bedeli-maliyet;
   	printf("Kar elde edilmistir. Kar miktari : %d",kar_zarar);
   }
   else if(maliyet>satis_bedeli){
   	kar_zarar=maliyet-satis_bedeli;
   	printf("Zarar elde edilmistir.Zarar miktari : %d",kar_zarar);
   }
   
   else{
   	printf("Kar veya zarar elde edilmemistir.");
   }
   

	return 0;
}
