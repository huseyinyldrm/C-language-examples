#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct PersonelBilgisi{
	int Yas;
	float Maas;
	char Isim[30];
	char Cinsiyet[8];
};


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	struct PersonelBilgisi  personel1;
   
   strcpy(personel1.Isim,"Ahmet"); // personel1.Isim="Ahmet" olursa hata olur esittir kullanilmaz//
   
   strcpy(personel1.Cinsiyet,"Erkek"); // personel1.cinsiyet="Erkek" olursa hata olur, esittir kullanilmaz //
   
   personel1.Yas=34;
   personel1.Maas=8500;
   
   // personel1 struct'unun degerlerini yazdir!!!!//
   
   printf("Personelin Adi:%s\n",personel1.Isim);
   printf("Personelin Cinsiyeti:%s\n",personel1.Cinsiyet);
   printf("Personelin Ya�i:%d\n",personel1.Yas);
   printf("Personelin Maa�i:%.2lf\n",personel1.Maas);
   
   printf("\n.............................\n");
   
   // D�KKKKKAAAAT struct bilgilerini main fonksiyonun di�inda tan�mlanmasi gerekir!!!!!!!!//
   
   //yeni bir personel tanimla(alternatif y�ntem)//
   
   struct PersonelBilgisi personel2={33,8000,"Ay�e","Kadin"};
   
   // personel22 struct de�erlerini yazd�r//
   
    printf("Personelin Adi:%s\n",personel2.Isim);
    printf("Personelin Cinsiyeti:%s\n",personel2.Cinsiyet);
    printf("Personelin Ya�i:%d\n",personel2.Yas);
	printf("Personelin Maa�i:%.2lf\n",personel2.Maas);
	
		
	return 0;
}
