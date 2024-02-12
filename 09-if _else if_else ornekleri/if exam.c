#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi1,sayi2;
    printf("Iki Sayi Giriniz=");
    scanf("%d%d",&sayi1,&sayi2);
  
    if(sayi1>sayi2){
   	    printf("%d daha buyuk bir sayidir.",sayi1);
    }
  
    if(sayi2>sayi1){
  	    printf("%d daha buyuk bir sayidir.",sayi2);
    }
    if(sayi1==sayi2){
  	    printf("Iki sayi esittir.");
    }
  
	return 0;
}
