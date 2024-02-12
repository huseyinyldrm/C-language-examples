#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	
	int sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(sayi>0){
		printf("Birinci blok: Girmis oldugunuz sayi pozitiftir.");
	}
	
	if(sayi<0){
		printf("Ikinci blok: Girmis oldugunuz sayi negatiftir.");
	}
	
	if(sayi==0){
		printf("Ucüncü blok: Girmis oldugunuz sayi sifirdir.");
	}
	
	
  printf("\n.....................\n");
  int Sayi,sayac=0,i=2;

 

while(sayac<10){
	
	printf("Bir sayi giriniz:");
    scanf("%d",&Sayi);

	if (Sayi/i==0)
	{
		printf("\nSayi asal degildir.\n");
	}
	else if(Sayi/i!=0)
	{
		printf("Sayi asaldir.\n");
	}

 sayac++;
}
			
	
	
	
	
	
	
	
	
	return 0;
}


