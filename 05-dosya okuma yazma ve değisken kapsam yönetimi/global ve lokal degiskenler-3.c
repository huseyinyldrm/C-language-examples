#include <stdio.h>
#include <stdlib.h>

  int islemlerGerceklestir(int A, int B) 
   {
   printf("A degiskenin islemlerGerceklestir fonksiyonu icindeki giris degeri=%d\n",A);
   printf("B degiskenin islemlerGerceklestir fonksiyonu icindeki giris degeri=%d\n",B);
   
    A*=12;
    B+=5;
    
   printf("A degiskenin islemlerGerceklestir fonksiyonu icindeki sonraki degeri=%d\n",A);
   printf("B degiskenin islemlerGerceklestir fonksiyonu icindeki sonraki degeri=%d\n",B);
    
   return A+B;
   }

int main(int argc, char *argv[]) {
	
	
	printf("\n.............DEGISKEN KAPSAM YONETIMI-GLOBAL VE LOKAL DEGISKENLER--3--................\n");
   // lokal degisken deklorasyonu //
   
   int A=10;
   int B=20;
   int C=0;
   
   printf("A degiskeninin main() icindeki degeri=%d\n",A);
   printf("B degiskeninin main() icindeki degeri=%d\n",B);
   
   C=islemlerGerceklestir(A,B);
   printf("C degiskeninin main() icindeki degeri=%d\n",C);
   
   printf("A degiskeninin main() icindeki degeri=%d\n",A);
   printf("B degiskeninin main() icindeki degeri=%d\n",B);
   
// main fonksiyonun icindeki  ve disindaki A,B,C degerleri ayný degildir!!!!// 

	
	
	
	
	
	return 0;
}
