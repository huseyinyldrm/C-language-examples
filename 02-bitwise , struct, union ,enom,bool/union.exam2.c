#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

union Veri{
	int i;
	float f;
	char str[20];
};


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	union Veri veri;
    veri.i=10;
    veri.f=220.5;
    
    strcpy(veri.str,"C Programlama Dili Kursu");
    
    printf("Verinin Buyuklugu:%d\n ",sizeof(veri));
    printf("veri.i:%d\n",veri.i);
    printf("veri.f:%.2f\n",veri.f);
    printf("veri.str:%s\n",veri.str);
    
    printf("\n.........................\n");
    
    
    veri.i=103;
    printf("Verinin Buyuklugu:%d\n",sizeof(veri));
    printf("veri.i:%d\n",veri.i);
    printf("veri.f:%.2f\n",veri.f);
    printf("veri.str:%s\n",veri.str);
    
    printf("\n.........................\n");
    
    veri.f=-203.45;
    
    printf("Verinin Buyuklugu:%d\n",sizeof(veri));
    printf("veri.i:%d\n",veri.i);
    printf("veri.f:%.2f\n",veri.f);
    printf("veri.str:%s\n",veri.str);
    
    printf("\n.........................\n");
  
  
	return 0;
}
