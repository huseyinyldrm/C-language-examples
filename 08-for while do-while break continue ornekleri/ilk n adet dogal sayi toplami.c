#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  int intager,ustDeger,toplam=0;
  
  printf("Ust sinir degerini giriniz:");
  scanf("%d",&ustDeger);
  
  for(intager=1; intager<=ustDeger; intager++ ){
  	toplam+=intager; // toplam=toplam + intager//
  }
  printf("Ýlk %d adet dogal sayinin toplami:%d",ustDeger,toplam);
   

	return 0;
}
