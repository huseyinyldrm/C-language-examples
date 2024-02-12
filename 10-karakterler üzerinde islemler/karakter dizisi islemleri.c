#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	//karakter dizisi birlestirme,kopyalama,karsilastirma//
   // BÝLGÝ=**string.h kutuphanesinden yararlanilir. **strcat=karakterleri uc uca ekler.  **strcpy= kopyalama ve atama islemi yapar. 
   //**strcmp= karsilastirma yapar. iki karakter arasinda ne kadar fark oldugunu bildirir.//
    
   char metin1[20]="Merhaba ";
   char metin2[]="Dunya!";
   char metin3[20];
   
   strcat(metin1,metin2); //metin2 yi metin1 in ucuna ekler sonuc metin1 de depolanir.//
   
   printf("%s",metin1);
   printf("\n.......\n");
   
   strcpy(metin3,metin1); // metin1 i metin3 e kopyala//
   
   printf("%s",metin3);
   printf("\n........\n");
   
   //compare metin1 ve metin3 u karsilastir ve sonucu yazdir//
   //mevcut durumda : metin1="Merhaba Dünya!",metin2="Dünya!",metin3="Merhaba Dünya!"//
   
   printf("%d\n",strcmp(metin1,metin3)); // 0 dondurur(esit olduklari icin)
   printf("%d\n",strcmp(metin1,metin2)); // 9 dondurur(esit olmadiklari icin)  buradaki sayilar dsabit degildir.
   printf("%d\n",strcmp(metin2,metin1)); //-9 dondurur(esit olmadiklari icin)

	return 0;
}
