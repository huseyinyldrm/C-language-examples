#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//metinler ile ilgili iþlemler//

   char metin1[]="Merhaba \n Dunya!";  // satýr baþý yapmaya yarar!!!!!//
   printf("%s",metin1);
   
   printf("\n...................\n");
   
   char metin2[]="Merhaba\t Dunya!";  // boþluk býrakmaya yarar!!!! //
   printf("%s",metin2);
   
    printf("\n...................\n");
   
   char metin3[]={'M','e','r','h','a','b','a','\0'}; // bitiriþ anlamýna gelir!!!! //
   printf("%s",metin3);
   
    printf("\n...................\n");
   
   char metin4[]="Ogretmen iceri girince \"GUNAYDIN\" diye seslendi.";  // týrnak içi gösterimi bu þekilde yapýlýr!!!! //
   printf("%s",metin4);
   
    printf("\n...................\n");
   
   char metin5[]="Ahmet\'in telefonu caliyor.";  // kesme iþareti bu þekilde yapýlýr!!!!! //
   printf("%s",metin5);
   
    printf("\n...................\n");
   
   char metin6[]="\\ karakteri ters taksim veya backslash olarak alinir."; // sadece tek bir \ bu þekilde yapýlýr!!!! //
   printf("%s",metin6);
   
    printf("\n...................\n");

	return 0;
}
