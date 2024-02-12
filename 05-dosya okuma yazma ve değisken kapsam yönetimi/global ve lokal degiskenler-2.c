#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int g_degisken1;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	
   printf("\n.............DEGISKEN KAPSAM YONETIMI-GLOBAL VE LOKAL DEGISKENLER--2--................\n");
   int a,b;
   a=21;
   b=12; // bu ikisi ilklendirme islemidir.//
   g_degisken1=a+b;
   printf("a=%d,b=%d ve g=%d\n",a,b,g_degisken1);
   
	return 0;
}
