#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	/*
	STRING ARAMA FONKSIYONLARI (1)
	1)strchr fonksiyonu = Bir dizide bir karakterin ilk olusumunu arar. Karakter bulunursa strchr stringteki karaktere bir isaretci gönderir.
	Aksi takdirde strcr NULL dondurur.
	*/
	const char *string="This is a test";
	char character1='a';
	char character2='z';
	
	if(strchr(string,character1) !=NULL){
		printf("\"%c\" was found in \" %s\".\n",character1,string);
	}
	else{
		printf("\"%c\" was not found in \" %s\".\n",character1,string);
	}
	
	if(strchr(string,character2) !=NULL){
		printf("\"%c\" was found in \" %s\".\n",character2,string);
	}
	else{
		printf("\"%c\" was not found in \" %s \".\n",character2,string);
	}
	
	printf("\n----------------------------------------------------------------\n");
	/*
	2)strcspn fonksiyonu= Ikinci bagimsiz degiskeninde stringden herhangi bir karakter icermeyen ilk bagimsiz degiskenindeki stringin ilk 
	bolumunun uzunlugunu belirler.Fonksiyon segmentinin uzunlugunu dondurur.
	*/
	 
	const char *string1="The value is 3.14159";
	const char *string2="1234567890";
	
	printf("%s%s\n%s%s\n\n%s\n%s%u\n","string1= ",string1,"string2= ",string2,"The length of the unitial segment of string1 ",
	"containing no characters from string2 =",strcspn(string1,string2)); 
	
	printf("\n----------------------------------------------------------------\n");
	/*
	3) strpbrk fonksiyonu= Ikinci string bagimsiz degiskeninde herhangi bir karakterin ilk olusumu icin ilk string bagýmsiz degiskenini arar.
	Ýkinci bagimsiz degiskenden bir karakter bulunursa strpbrk ilk bagimsiz degiþkenindeki karaktere bir isaretci dondurur aksi takdirde 
	NULL dondurur.Yani iki string icinde hangi harf ortak onu bulmaya yarar.
	*/
	
	const char *string3="This is a test";
	const char *string4="beware";
	
	printf("%s\"%s\" \n '%c' %s\n \" %s\"\n","Of the characters in ",string4,*strpbrk(string3,string4),"appears earliest in ",string3);
	
	
	printf("\n----------------------------------------------------------------\n");

	
	return 0;
}
