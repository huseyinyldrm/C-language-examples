#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	//stringler üzerinde iþlemler yapma

   char karsilama_mesaji1[]="Merhaba!";
   char karsilama_mesaji2[]={'M','e','r','h','a','b','a','!','\0'};
   
   printf("%lu\n",sizeof(karsilama_mesaji1));   
   printf("\n.......................\n");
   printf("%lu\n",sizeof(karsilama_mesaji2));
   
   
   
//COOK ONEMLI NOT= Turkce karakterler 1 bit degil 2 bit olarak saklanir. multi_character uyarisi gelir(ü,þ,ç,ð...)//
//sizeof= Karakter dizilerinin boyutlarini elde eder.

// %lu ile sayi cikti verir...//


	return 0;
}
