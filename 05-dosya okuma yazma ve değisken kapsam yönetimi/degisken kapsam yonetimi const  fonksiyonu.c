#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	printf("\n.............DEGISKEN KAPSAM YONETIMI-CONST FONKSIYONU................\n");

   // const () fonksiyonuna degiþmeyen veriler atanir. buna sonradan atama yapilamaz yoksa hata verir. //
   
   const int SaattakiDakikaSayisi=60;
   const float PI=3.14;
   
   printf("%d\n",SaattakiDakikaSayisi);
   printf("%f\n",PI); // eger PI=PI+5; gibi bir islem yapilirsa hata olur.//
   
   

	return 0;
}
