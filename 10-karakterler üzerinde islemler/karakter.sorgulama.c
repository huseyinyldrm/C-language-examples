#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char karakter;
	printf("Lutfen bir karakter giriniz:");
	scanf("%c",&karakter);    // karakter tipi %c dikkat
	
	
	if((karakter>='a'&&karakter<='z')||(karakter>='A'&&karakter<='Z')){
		printf("Girilen karakter alfabetiktir.");
    }
    else{
    	printf("Karakter alfabetik degildir.");
	}

	return 0;
}
