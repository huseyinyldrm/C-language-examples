#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	int sayi1,sayi2,sayi3,maksimum;
	
	printf("Lutfen uc sayi giriniz:");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	
	if(sayi1>sayi2){
		if(sayi1>sayi3){
			maksimum=sayi1; //sayi1>sayi2 ve sayi1>sayi3 ise
		}
		else{
			maksimum=sayi3;  //sayi1>sayi2 ancak sayi1>sayi3 degilse
		}
	}
	
	else{
		if(sayi2>sayi3){
			maksimum=sayi2;  //sayi1>sayi2 degilse ve sayi2>sayi3 ise
		}
		else{
			maksimum=sayi3;  //sayi1>sayi2 degilse ve sayi2>sayi3 degilse
		}
	}
	
	printf("\n......................................\n");
	printf("3 sayi icindeki en buyuk deger=%d",maksimum);
	return 0;
}
