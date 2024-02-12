#include <stdio.h>
#include <stdlib.h>

int SayiCiftMi(int sayi) 
{
	if((sayi%2)==0)
	return 1;
	
	else
	return 0;
}


int main(int argc, char *argv[]) {
	
	int sayi;
	printf("Sayi degerini giriniz:");
	scanf("%d",&sayi);
	
	if(SayiCiftMi( sayi)){
		printf("Bu bir cift sayidir.");
	}
	else{
		printf("Bu bir tek sayidir.");
	}

	return 0;
}
