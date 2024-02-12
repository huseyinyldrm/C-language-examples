#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
   printf("\n.............DOSYA OKUMA VE HATA AYIKLAMA ISLEMLERI................\n");
   
   FILE*fPtr_2; // dosyamýzýn referansýný tutan iþaretçi//
   
   char karakter;
   
   fPtr_2=fopen("dosya1.txt","r");//istenen dosya adi girilmelidir.
   fclose(fPtr_2);
   
   if(fPtr_2==NULL)
   {
   	printf("Dosya okunamadi.\n");
   	printf("Dosyanin ilgili konumda olup olmadigini ve yetkiniz olup olmadigini kontrol edin.\n");
   	exit(EXIT_FAILURE);
   }
   
   do
   {
   	karakter=fgetc(fPtr_2); // dosyadan bir karakter oku.//
   	putchar(karakter); // dosyadan okudugun karakteri konsola yazdir.//
   }
   while(karakter!=EOF); // bunu EOF( end of file) karakterine denk gelmedigin sürece yazdir.//
    
// eger istenilen dosya yoksa okunmaz. ve kendisinden sonraki programlari calistirmiyor. sadece bu program icin//	


	return 0;
}
