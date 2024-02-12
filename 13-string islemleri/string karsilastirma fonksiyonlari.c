#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	
	/* STRING KARSILASTIRMA FONKSIYONLARI 
	1)strcmp(*s1,*s2)= s1 ve s2' yi karsilastirir. Eger esitse 0 degilse -1 veya 1 atar.
	2)strncmp(s1,s2,size_t n)= istenilen n degerinden itibaren s1 ve s2' yi karsilastirir.
	*/
	
	const char *s1="Happy New Year";
	const char *s2="Happy New Year";
	const char *s3="Happy Holidays";
	
	printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n","s1= ",s1,"s2= ",s2,"s3= ",s3,"strcmp(s1,s2)= ",strcmp(s1,s2),
	"strcmp(s1,s3)= ",strcmp(s1,s3),"strcmp(s2,s3)= ",strcmp(s2,s3));
	
	printf("%s%2d\n%s%2d\n%s%2d\n","strncmp(s1,s3,6)= ",strncmp(s1,s3,6),"strncmp(s1,s3,7)= ",strncmp(s1,s3,7),
	"strncmp(s3,s1,7)= ",strncmp(s3,s1,7));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
