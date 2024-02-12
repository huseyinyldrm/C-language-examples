#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayi,sonuc=1;
	
	printf("Carpim tablosu yapmak istediginiz sayiyi giriniz:");
	scanf("%d",&sayi);
	
	for(int i=1; i<=10; i++){
		sonuc=i*sayi;
		printf("%d x %d= %d\n",sayi,i,sonuc);
	}
	
	return 0;
}
