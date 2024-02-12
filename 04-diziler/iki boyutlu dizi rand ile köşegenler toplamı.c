#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	int k,l, grs[10][10],top1=0,top2=0;
	
	srand(time(NULL));  // rastgele ve sürekli farkli degerler dondurur //
	
	
	for(k=0; k<10; k++){
		for(l=0; l<10; l++){
			grs[k][l]=50 + rand()%51;  // 50 ile 100 arasi rastgele sayi yazdirir //
		}
	}
	
	for(l=0; l<10; l++){
		top1=top1+grs[l][l];
		top2=top2+grs[l][9-l];
	}
	
	printf("1. Kosegen toplami =%d \n 2. Kosegen toplami=%d ",top1,top2);
	
	return 0;
}
