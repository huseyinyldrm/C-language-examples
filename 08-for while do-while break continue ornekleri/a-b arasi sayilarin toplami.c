#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int intager,altSinir,ustSinir,total=0;
  
    printf("Alt sinir degerini giriniz:");
    scanf("%d",&altSinir);
    printf("Üst sinir degerini giriniz:");
    scanf("%d",&ustSinir);
  
    for(intager=altSinir; intager<=ustSinir; intager++){
  	    total+=intager;
    }      
    
   printf("%d ve %d arasindaki dogal sayilarin toplami:%d",altSinir,ustSinir,total);
   

	return 0;
}
