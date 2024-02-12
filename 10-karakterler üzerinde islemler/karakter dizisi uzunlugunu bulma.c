#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	//ORNEK KARAKTER DIZISI UZUNLUGU//
   //strlen ifadesi kullanilir.  sizeof dizinin boyutunu ve hafizada ayrilan yeri g�sterirken strlen dizinin uzunlugunu gosterir.//
   
   char ingiliz_alfabesi[]="ABCDEFGHIJKLMNOPRSTUVWXYZQ";
   
   printf("%d",strlen(ingiliz_alfabesi)); 
   printf("\n...............\n"); 
   
   printf("%d",sizeof(ingiliz_alfabesi));
   printf("\n-----------------------------\n");
   
   char turk_alfabesi[]="ABC�DEFG�HI�JKLMNO�PRS�TU�VYZ";
   printf("%d",strlen(turk_alfabesi));
   
   printf("\n..........\n");
   
   printf("%d",sizeof(turk_alfabesi));
   
   printf("\n------------------------------\n");
   
   char deneme[50]="ABCDEFGHIJKLMNOPRSTUVWXYZQ";
   printf("%d",strlen(deneme));  
   
   printf("\n...........\n");
   
   printf("%d",sizeof(deneme)); 
   
   printf("\n------------------------------\n");
   
	return 0;
}
