#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
		
    printf("\n............REALLOC FONKIYONU KULLANIMI ................\n");	

    int *isaretci3,boyut1,boyut2,bellekAdresi;
    
    printf("Boyut giriniz:");
    scanf("%d",&boyut1);
    
    isaretci3=(int*)malloc(boyut1*sizeof(int));
    
    if(isaretci3==NULL)
   {
     printf("Hata! Bellek ayýrma islemi basarýsiz oldu.");
   	 exit(0);
   }
   free(isaretci3);
   
   printf("Ayrýlan (Tahsis Edilen) ilk bellek adresleri:\n");
   
   for(bellekAdresi=1; bellekAdresi<=boyut1; ++bellekAdresi)
   {
   	printf("%pc\n",isaretci3+bellekAdresi);   //  %pc =  onaltilik sayý düzenini çagirir.//
   }
   
   printf("\nYeni boyut giriniz:");
   scanf("%d",&boyut2);
   
   // yeni bellek ayýrma islemi söyle yapilir //
   
   isaretci3=realloc(isaretci3,boyut2*sizeof(int));
   
   if(isaretci3==NULL)
   {
   	printf("Hata! Bellek ayirma islemi basarisiz oldu.");
   	exit(0);
   }
   free(isaretci3);
   
   
   printf("Ayrilan (Tahsis Edilen) yeni bellek adresleri:\n");
   for(bellekAdresi=1; bellekAdresi<=boyut2; ++bellekAdresi) // bellekAdresini 1'den baþlat ki istediðin sayýda adres versin!!!! //
   
   	printf("%pc\n",isaretci3+bellekAdresi);
   

	return 0;
}
