#include <stdio.h>
#include <stdlib.h>


/*
 mukemmel sayi = kendisi haric pozitif bolenlerinin sayisinin toplami kendisine esit olan sayiya denir.//
 ornek= 6= 1+2+3=6,  28=1+2+3+4+7+14=28//   
*/   
   int SayiMukemmelMi(int sayi)
   {
   	int i,toplam,n;
   	toplam=0;
   	n=sayi;
   	
   	for(i=1; i<n; i++)
	   {
	   	if(n%i==0)
		   {
		   	toplam+=i;
		   }
	   
	   }
	   return (sayi==toplam);
   }

int main(int argc, char *argv[]) {
	
	int sayi;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(SayiMukemmelMi(sayi))
	{
		printf("%d bir mükemmel sayidir.\n",sayi);
	}
	else
	{
		printf("%d bir mükemmel sayi degildir.\n",sayi);
	}
    

	return 0;
}
