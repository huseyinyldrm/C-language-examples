#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//metinler ile ilgili i�lemler//

   char metin1[]="Merhaba \n Dunya!";  // sat�r ba�� yapmaya yarar!!!!!//
   printf("%s",metin1);
   
   printf("\n...................\n");
   
   char metin2[]="Merhaba\t Dunya!";  // bo�luk b�rakmaya yarar!!!! //
   printf("%s",metin2);
   
    printf("\n...................\n");
   
   char metin3[]={'M','e','r','h','a','b','a','\0'}; // bitiri� anlam�na gelir!!!! //
   printf("%s",metin3);
   
    printf("\n...................\n");
   
   char metin4[]="Ogretmen iceri girince \"GUNAYDIN\" diye seslendi.";  // t�rnak i�i g�sterimi bu �ekilde yap�l�r!!!! //
   printf("%s",metin4);
   
    printf("\n...................\n");
   
   char metin5[]="Ahmet\'in telefonu caliyor.";  // kesme i�areti bu �ekilde yap�l�r!!!!! //
   printf("%s",metin5);
   
    printf("\n...................\n");
   
   char metin6[]="\\ karakteri ters taksim veya backslash olarak alinir."; // sadece tek bir \ bu �ekilde yap�l�r!!!! //
   printf("%s",metin6);
   
    printf("\n...................\n");

	return 0;
}
