#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
   printf("\n.............belirli bir sayiya kadar fibonacci dizisi ................\n");
   
   int n0=0,n1=1,Sayac,digerTerim=0;
   
   printf("Bir sayi giriniz: ");
   scanf("%d",&Sayac);
   
   printf("Fibonacci Dizisi: %d %d ",n0,n1);
   digerTerim=n0+n1;
   
   while(digerTerim<=Sayac)
   {
   	printf("%d ",digerTerim);
   	n0=n1;
   	n1=digerTerim;
   	digerTerim=n0+n1;
   }


	return 0;
}
