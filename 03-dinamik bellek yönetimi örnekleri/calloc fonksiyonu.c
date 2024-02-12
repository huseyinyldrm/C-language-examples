#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	
   printf("\n.............CALLOC FONKSIYONU KULLANIMI ................\n");	
   int elemanAdedi,i,*isaretci2,toplam2=0;
   
   printf("Toplanacak eleman sayisini giriniz=");
   scanf("%d",&elemanAdedi);
   printf("\n\n");
   isaretci2=(int*)calloc(elemanAdedi,sizeof(int));
   
   if(isaretci2==NULL)
   {
   	printf("Hata! Bellek ayirma islemi basarisiz oldu.");
   	exit(0);
   }
   free(isaretci2);
   
   printf("Toplanacak elemanlari giriniz=");
   
   for(i=1; i<=elemanAdedi; ++i)
   {
   	scanf("%d",isaretci2+i);
   	toplam2+=*(isaretci2+i);
   }
	printf("Toplam=%d",toplam2);
	

	return 0;
}
