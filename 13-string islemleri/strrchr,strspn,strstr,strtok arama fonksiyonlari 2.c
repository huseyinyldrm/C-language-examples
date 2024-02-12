#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	/*
	STRING ARAMA FONKSIYONLARI (2)
	4)strrchr fonksiyonu= Bir stringte belirtilen karakterin son olusumunu arar.Karakter bulunursa strrchr stringteki karaktere bir 
	isaretci dondurur aksi takdirde NULL dondurur.
	*/
	
	const char *string="A zoo has many animals including zebras";
	int c='z';
	
	printf("%s\n%s'%c'%s\" %s\"\n","The remainder of string beginning with the ",
	"last occurence of character",c,"is: ",strrchr(string,c));
	
	printf("\n--------------------------------------------------\n");
	
	/*
	5)strspn fonksiyonu = 2. bagimsiz degiskeninde yalnizca stringten karakter iceren ilk bagimsiz degiþkendeki stringin ilk bolumunun
	uzunlugunu belirier . Fonksiyon segmentin uzunlugunu dondurur.
	*/
	const char *string1="The value is 3.14159";
	const char *string2="aehi IsTuv";
	
	printf("%s%s\n%s%s\n\n%s\n%s%u\n","string1= ",string1,"string2= ",string2,"The length of the initial segment of string1",
	"containing only characters from string2=",strspn(string1,string2));
	
	
	printf("\n--------------------------------------------------\n");
	
	/*
	6)strstr fonksiyonu = Ilk string bagimsiz degiskeninde ikinci string bagimsiz degiskeninin ilk olusumunu arar.
	*/
	
	const char *string3="abcdefabcdef";
	const char *string4="def";
	
	printf("%s%s\n%s%s\n\n%s\n%s%s\n","string3= ",string3,"string4= ",string4,
	"The remainder of string3 beginning with the","first occurence of string4 is: ",strstr(string3,string4));
	
	printf("\n--------------------------------------------------\n");
	/*
	7) strtok fonksiyonu = Bir diziyi bir dizi simgeye bölmek icin kullanilir.Genellikle bosluklar veya noktalama isaretleri 
	bir sinirlayici olabilir. Yani verilen bir diziyi alt alta yazmayý saglar.
	
	*/ 
	
	char string5[]="This is a sentence with 7 tokens";
	char *tokenPtr;
	printf("%s\n%s\n%s\n\n","The string to be tokenized is ",string5,"The tokens are: ");
	
	tokenPtr=strtok(string5," "); // bosluk , sinirlayici olarak kabul edildi.
	
	while(tokenPtr!=NULL){
		printf("%s\n",tokenPtr);
		tokenPtr=strtok(NULL," ");
	}
		
	printf("\n--------------------------------------------------\n");
	
		
	return 0;
}
