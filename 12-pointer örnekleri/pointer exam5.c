#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
    int ilkSayi=10;
    int*isaretci;
    //sayý degiskeninin adresi , isaretci isimli pointer tipi degisken tarafindan tutulacak 
  
    isaretci=&ilkSayi;
    printf("Sayi degiskeninin Adresi=%d\n",&ilkSayi);
    printf("Sayi Degiskeninin Icerigi=%d\n",ilkSayi);
    printf("\n...........................................\n");
    printf("Isaretci Degiskeninin Adresi=%d\n",&isaretci);
    printf("Isaretci Degiskeninin Icerigi=%d\n",isaretci);
    printf("Ýþaretçi Deðiþkeninin Ýþaret Ettiði Deðer=%d\n",*isaretci);
  
  
	return 0;
}
