#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int g_degisken=20; 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");

	
   printf("\n.............DEGISKEN KAPSAM YONETIMI-GLOBAL VE LOKAL DEGISKENLER................\n");
   
   // int g_degisken=20; // global degisken deklorasyonu main disina yazilir.//
   printf("g=%d\n",g_degisken);
   int degisken=10;  // local degisken beyani (deklorasyonu)
   printf("l=%d\n",degisken);   
   
   // 1)Global Deðiþkenler= eger programci tarafindan bir deger girilmezse derleyici tarafindan otomatik olarak ilklendirilir.//
   // Global degisken deklorasyonu main fonksiyonunun disinda tanimi yapilir.//
   // derleyici tarafindan otomatik olarak ilklendirilen degerler= int=0 , char='\0' , double=0 , pointer=NULL seklindedir.//
   
   // 2) Lokal Degiskenler= main fonksiyonunun icinde yer alir.Eger programci tarafindan deger atanamazsa otomatik atama olmaz.//
   // bilgisayar belleginde kalan tuhaf degerleri almamalari icin programcilar tarafindan ilklendirilmesinde fayda vardir.//
   // Ayný isimli local ve global degisken olur mu?=  main fonksiyonu icinde olan local degiskenin degeri esas alinir.//
   //  hata vermez ama tavsiye edilmez.//
   
     

	return 0;
}
