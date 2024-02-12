#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	printf("\n.............DOSYA OKUMA VE HATA AYIKLAMA ISLEMLERI-2................\n");

   int bolunen;
   int bolen;
   float bolum;
   
   printf("Lutfen bolmek istediginiz sayiyi giriniz=");
   scanf("%d",&bolunen);
   printf("Lutfen bolecek olan sayiyi giriniz:");
   scanf("%d",&bolen);
   if(bolen==0)
   {
   	fprintf(stderr,"Sifira bolum hatasi! programdan cikiliyor...\n ");
   	exit(EXIT_FAILURE);
   }
   
   bolum=(float)bolunen/bolen;
   fprintf(stderr,"Bolum sonucu =%.2f\n",bolum);
   
   //exit(EXIT_SUCCESS); // bu eklenti kendisinden sonra uygulama yoksa kullanilmali yoksa diger uygulamalari calistirmaz.//
   

	return 0;
}
