#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
		
	int benimDizim[]={25,30,45,60};
	benimDizim[0]=22;
	int indeks;
	
	for(indeks=0; indeks<4; indeks++){    // indekste asim olmamasina dikkat et!!! diziler hafizayi hor kullanir!!!!//
		printf("%d ",benimDizim[indeks]);
	}
	

	return 0;
}
