#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayi;
  
    printf("\nLutfen bir sayi giriniz=");
    scanf("%d",&sayi);
  
    if(sayi>0){
  	    printf("1. Blok:Girmis Oldugunuz Sayi POZITIF");
    }
    if(sayi<0){
     	printf("2.Blok:Girmiþ Olduðunuz Sayi NEGATIF");
   }
    if(sayi==0){
     	printf("3.Blok:Girmis Oldugunuz Sayi SIFIR");
   }
	return 0;
}
