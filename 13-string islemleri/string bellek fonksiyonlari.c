#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	/* 
	STRING BELLEK FONKSIYONLARI
	
	1)memcpy fonksiyonu= Ikinci argumani tarfindan isaret edilen nesneden ilk argumaný tarafindan gosrterilen nesneye
	belirtilen sayida karakteri toplar veya kopyalar.
	*/ 
	char s1[17];
	char s2[]="copy this string";
	
	memcpy(s1,s2,17);
	printf("%s\n%s\n%s\n","After s2 is copied into s1 with memcpy","s1 contains ",s1);
	
	
	printf("\n-----------------------------------------------------\n");
	/*
	2)memmove fonksiyonu= memcpy gibi ikinci argumaný tarafindan isaret edilen nesneden ilk ilk argumani tarafindan gösterilen 
	nesneye belirli sayida bayt toplar.
	*/
	
	char x[]="Home Sweet Home";
	printf("%s%s\n","The string in array x before memmove is: ",x);
	printf("%s%s\n","The string in array x after memmove is: ",memmove(x,&x[5],10));
	
	
	
	printf("\n-----------------------------------------------------\n");
	/*
	3)memcmp fonksiyonu= Ilk argumanin belirtilen karakter sayisini ikinci argumanina karsilik gelen argumaniyla karsilastirir.
	*/
	char s3[]="ABCDEFG";
	char s4[]="ABCDXYZ";
	
	printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n","s3= ",s3,"s4= ",s4,"memcmp(s3,s4,4)= ",memcmp(s3,s4,4),"memcmp(s3,s4,7)= ",memcmp(s3,s4,7),
	"memcmp(s4,s3,7)= ",memcmp(s4,s3,7));
	
	
	
	printf("\n-----------------------------------------------------\n");
	/*
	4)memchr fonksiyonu = Bir nesnenin belirtilen bayt sayisinda isaretsiz karakter olarak temsil edilen bir baytin ilk olusumunu arar.
	Bayt bulunursa nesnedeki bayta yönelik nir isaretci dondurur aksi takdirde bir NULL isaretcisi dondurur.
	*/
	
	const char *a="This is a string";
	
	printf("%s\'%c\'%s\"%s\"\n","The remainder of a after character ",'r',"is found is ",memchr(a,'r',16));
	
	
	
	printf("\n-----------------------------------------------------\n");
	/*
	5)memset fonksiyonu = Ikinci argumandaki baytin degerini ilk argumani tarafindan gosterilen nesnenin ilk n baytina kopyalar.
	Burada n 3. argüman tarafindan belirtilir.
	*/	
	
	char string[15]="BBBBBBBBBBBBBBB";
	printf("string=              %s\n",string);
	printf("string after memset =%s\n",memset(string,'c',8));
	
	
	
	printf("\n-----------------------------------------------------\n");
	return 0;
}
