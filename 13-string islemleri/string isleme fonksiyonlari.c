#include <stdio.h>
#include <stdlib.h>
#include <string.h>   //Bu kutuphaneyi eklemeyi unutma!!!//

int main(int argc, char *argv[]) {
	
	/* 1)strcpy(s1,s2)= s2'yi s1'e kopyalar.
	   2)strcat(s1,s2)=s2'yi s1 ile birlestirir.
	   3)strncpy(s1,s2)= Istenilen n degerinden itibaren s2'yi s1'e kopyalar.
	   4)strncat(s1,s2)=Istenilen n degerinden itibaren s2'yi s1'e yapýstýrýr.
	*/
	
	char x[]="Happy Birthday To You";
	char y[25];
	char z[25];
	
	printf("%s%s\n%s%s\n","The string in array x is ",x,"The string in array y is : ",strcpy(y,x));
	
	strncpy(z,x,14);
	z[14]='\0';
	
	printf("The array z is : %s",z);
	
	printf("\n\n..........................................\n\n");
	
	char s1[20]=" Happy ";
	char s2[]=" New Year ";
	char s3[40]=" ";
	
	printf(" s1=%s\n s2=%s\n",s1,s2);
	printf(" strncat(s3,s1,6)=%s \n",strncat(s3,s1,6));
	printf(" strcat(s2,s1)=%s \n ",strcat(s2,s1));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
