#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	
	/*
	 STRING ISLEME KUTUPHANESININ DIGER FONKSIYONLARI
	1)strerror fonksiyonu= Bir hata numarasi alir ve bir hata mesaji dizisi olusturur.String icin bir isaretci dondurur.
	2)strlen fonksiyonu = Bir stringi bagimsiz degisken olarak alir ve stringteki karakter sayisini dondurur.
	Sonlandirici bos karakter uzunluga dahil edilmez.
	*/
	
	printf("%s\n",strerror(2));
	
	printf("\n--------------------------------------\n");
	
	const char *string1="abcdefghijklmnoprstuvwxyz";
	const char *string2="four";
	const char *string3="Boston";
	
	printf("%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
	"The length of ",string1,"is =",(unsigned long)strlen(string1),
	"The length of ",string2,"is = ",(unsigned long)strlen(string2),
	"The length of ",string3,"is = ",(unsigned long)strlen(string3));
	

	return 0;
}
