#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// sayinin asal olup olmadigini bulan fonksiyon//
int SayiAsalMi(int sayi)
{
	int i;
	
	for(i=2; i<=sayi/2; i++) //DÝKKATT= burada sayiyi 2'ye boleriz.eger i sayi nin yarisi ise zaten asal sayi degildir.//
	{
		if(sayi%i==0)
		{
			return 0;
		}
	}
	return 1; // ya da sayi i ikiye bolmez, bu komutu for dongusunun icine alirsak yine de fonksiyon çalisir.//
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");	
	int sayi;
	printf("Lütfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(SayiAsalMi(sayi))
	{
		printf("%d bir asal sayidir.\n",sayi);
	}
	else
	{
		printf("%d bir asal sayi degildir.\n",sayi);
	}

	
	return 0;
}
