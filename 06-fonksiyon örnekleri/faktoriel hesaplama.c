#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  int FaktoriyelHesapla(int rakam)
  {
  	int faktor;
  	if(rakam==1)
	  {
	  	faktor=1;
	  }
	  else
	  {
	  	faktor=rakam*FaktoriyelHesapla(rakam-1);
	  }
	  return faktor;
  }


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
		
	int deger;
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&deger);
	
	printf("%d! =%d\n",deger,FaktoriyelHesapla(deger));
	

	return 0;
}
