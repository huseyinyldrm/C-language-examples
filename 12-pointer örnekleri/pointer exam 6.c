#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi_1,sayi_2,toplam;
    int *isaretci1,*isaretci2;
  
    isaretci1=&sayi_1;
    isaretci2=&sayi_2;
  
    printf("Iki Sayi Giriniz=");
    scanf("%d%d",isaretci1,isaretci2);
  
    toplam=*isaretci1+ *isaretci2;
    printf("Toplam=%d",toplam);  
  
  
	return 0;
}
