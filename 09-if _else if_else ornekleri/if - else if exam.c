#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	int Sayi;
    printf("\n Bir Sayi Giriniz=");
    scanf("%d",&Sayi);
  
    if(Sayi>0){
  	    printf("Sayi pozitiftir.");
   }
  
    else if(Sayi<0){
  	    printf("Sayi negatiftir.");
   }
  
    else{
     	printf("Sayi sifirdir.");
   }
	return 0;
}
