#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int intager,sayi;
  
    printf("Carpanlari hesaplanacak sayiyi giriniz:");
    scanf("%d",&sayi);
  
    printf("%d sayisinin carpanlari soyledir:\n",sayi);
  
    for(intager=1; intager<=sayi; intager++){ // 1den sayiya kadar tüm sayýlari gez//
  	
  	    if(sayi%intager==0){ // bir sayi intager e tam bölünüyorsa //
  		    printf("%d\n",intager);
	   }
    }

	return 0;
}
