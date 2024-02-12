#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
   
   
   int intager,ustMertebe;
   printf("Ust sinir degerini giriniz:");
   scanf("%d",&ustMertebe);
   
   printf("1\'den %d\'ye kadar olan sayma sayilari:\n",ustMertebe);
   
   for(intager=1; intager<=ustMertebe; intager++){
   	printf("%d\n",intager);
   }
    printf("\n-------------\n");
    
    
    intager=1;
    while(intager<=ustMertebe){
    	printf("%d\n",intager);
    	intager++; // bu yapilmazsa surekli donguye girer//
	}
    
	printf("\n-------------\n");
    
    intager=1;
    do{
    	printf("%d\n",intager);
    	
    	intager++; // bu yazilmazsa surekli donguye girer//
	}while(intager<=ustMertebe);
	
	printf("\n-------------\n");
	
	// DİKKKKATTT= ustteki ornekte uc farkli sekilde de yapilabilen ornek vardir !!!!//

	return 0;
}
