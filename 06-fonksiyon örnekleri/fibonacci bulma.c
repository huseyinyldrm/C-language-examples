#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int NinciFibonacciSayisiniHesapla(int n)
  {
  	if(n==1)
	  {
	  	return 0;
	  }
	else if(n==2)
	{
		return 1;
	}
	
	else
	{
		return 0;
	}  
  	NinciFibonacciSayisiniHesapla(n-1)+NinciFibonacciSayisiniHesapla(n-2);
  }



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");    
    
    int n1=0,n2=1;
    printf("Fibonacci dizisinin ilk kac elemaninin hesaplanmasini istersiniz?:");
    int adet;
    scanf("%d",&adet);
    int n3,i;
    printf("%d %d",n1,n2); // 0 ve 1 i yazdýr //
    
    for(i=2; i<adet; i++)
	{
		n3=n1+n2;
		printf(" %d ",n3);
		n1=n2;
		n2=n3;
	}


	return 0;
}
