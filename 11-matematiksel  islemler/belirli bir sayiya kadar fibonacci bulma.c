#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	printf("\n.............FIBONACCI SAYI DEGERINI  HESAPLAMA UYGULAMASI-2................\n");
    	
   // Belirli Bir Sayiya Kadar Fibonacci Dizisi//

	int n1=0,n2=1,sonrakiTerim=0,ninci;
	
	printf("Pozitif bir sayi giriniz:");
	scanf("%d",&ninci);
	
	printf("fibonacci Dizisi: %d %d ",n1,n2);
	
	sonrakiTerim=n1+n2;
	
	while(sonrakiTerim<=ninci)
	{
		printf("%d ",sonrakiTerim);
		n1=n2;
		n2=sonrakiTerim;
		sonrakiTerim=n1+n2;
	}
	

	return 0;
}
