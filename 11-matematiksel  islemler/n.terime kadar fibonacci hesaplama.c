#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	
	printf("\n.............FIBONACCI SAYI DEGERINI  HESAPLAMA UYGULAMASI-1................\n");
    
    // n. terim kadar fibonacci yazdirir//
	int i,terim,t1=0,t2=1,nextTerm;

	printf("Terim sayýsýný giriniz:");
	scanf("%d",&terim);
	
	printf("Fibonacci Dizisi: ");
	
	for(i=1; i<=terim; i++)
	{
		printf("%d ",t1);
		nextTerm=t1+t2;
		t1=t2;
		t2=nextTerm;
	}

	return 0;
}
