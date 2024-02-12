#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int a[10];
    int i,j;
    
    for(i=0; i<10; i++){
        printf("Lutfen 10 tane tamsayi giriniz:");
        scanf("%d",&a[i]);
    }
    
    printf("\n-------------------------------\n");
    for(j=0; j<5; j++){
        printf("%d %d ",a[j],a[9-j]);
    }
    
    
    printf("\n*******************************\n");
    
   

	return 0;
}
