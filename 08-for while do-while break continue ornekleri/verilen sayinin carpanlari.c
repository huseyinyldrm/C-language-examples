#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int intager,sayi;
  
    printf("Carpanlari hesaplanacak sayiyi giriniz:");
    scanf("%d",&sayi);
  
    printf("%d sayisinin carpanlari soyledir:\n",sayi);
  
    for(intager=1; intager<=sayi; intager++){ // 1den sayiya kadar t�m say�lari gez//
  	
  	    if(sayi%intager==0){ // bir sayi intager e tam b�l�n�yorsa //
  		    printf("%d\n",intager);
	   }
    }

	return 0;
}
