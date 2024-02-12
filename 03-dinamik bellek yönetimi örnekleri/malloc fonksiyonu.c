#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
ILERI KONULAR -- DINAMIK BELLEK YONETIMI FONKSIYONLARI 

 dort temel fonksiyon=malloc(),calloc(),realloc(),free(). SOZ DIZIMLERI VE KULLANIMLARI SOYLEDIR:


 1)malloc() = calisma esnasinda ne kadar veri isleyecegimiz belli oluyorsa bellek yonetimi icin kullanýlýr.
 isaretci=(castTipi*)malloc(boyut);  isaretci=(float*)malloc(100*sizeof(float));  


 2)calloc() = iki parametre alir ( n ve tahsis edilmesi istenen alan). Bellek alaninda tek parça yer acmaya yarar. 
 Tahsis ettigi her yer için ilklendirme islemi uygular ve her yere 0 atar. 
 isaretci=(castTipi*)calloc(n,boyut);  isaretci=(float*)calloc(100,sizeof(float)); 
 
 
 3) realloc() = yeniden tahsis etme islemi de denir. Daha once tanimlanan isaretciyi yeniden boyutlandirma islemi yapar.
isaretci=realloc(isaretci,yeni_boyut); 


 4) free() = Daha önce isaretci bir fonksiyon varsa orayi serbest birakmayi saglar. Her fonksiyonun sonunda kullanilmalidir. 
 free(isaretci); 
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");

   printf("\n.............MALLOC FONKSIYONU KULLANIMI................\n");
   int eleman_sayisi,adet,*isaretci,toplam=0;
   
   printf("Toplanacak eleman sayýsýný giriniz=");
   scanf("%d",&eleman_sayisi);
   
   isaretci=(int*)malloc(eleman_sayisi*sizeof(int));
   
  // bellek ayirma iþleminin baþarisiz olmasi durumunda //
   
   if(isaretci==NULL)  // burasi ve free fonksiyonu bu tarz islemlerde standart olmalidir. //
   {
   	printf("Hata! Bellek ayirma islemi basarisiz oldu.");
   	exit(0);
   }
   	free (isaretci); // ayrilmis olan bellegi serbest birakir.//
		  	

	printf("Toplanacak elemanlari giriniz=");
	
	for(adet=1; adet<=eleman_sayisi; ++adet)
	{
		scanf("%d",isaretci+adet);
		toplam+=*(isaretci+adet);
	}
	printf("Toplam=%d",toplam);

	return 0;
}
