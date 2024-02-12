#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
		
	int benimDizim[]={25,50,75,100};
	benimDizim[0]=33;
	printf("%d\n",benimDizim[0]); // sadece istenilen indeksteki deger degistirilir.//
	
	for(int i=0; i<4; i++){
		printf("Dizi %d. index = %d\n",i,benimDizim[i]);
	}

	return 0;
}
