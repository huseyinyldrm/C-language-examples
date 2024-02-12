#include <stdio.h>
#include <stdlib.h>

int AsalMi(int sayi)
{
	int i;
	
	for(i=2; i<=sayi/2; i++)
	{
		if(sayi%i==0)
		{
			return 0;
		}
	}
	return 1;
}


int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(AsalMi(sayi)){
		printf("%d Sayisi asaldir.",sayi);
	}
	else{
		printf("%d asal sayi degildir.",sayi);
	}
	
	
	return 0;
}
