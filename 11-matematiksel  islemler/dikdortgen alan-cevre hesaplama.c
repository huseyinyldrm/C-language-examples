#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float kisa_kenar,uzun_kenar,cevre,alan;
	
	printf("Dikdortgenin uzun kenarini giriniz:");
	scanf("%f",&uzun_kenar);
	
	printf("Dikdortgenin kisa kenarini giriniz:");
	scanf("%f",&kisa_kenar);
	
	printf("\n\n");
	cevre=2*(kisa_kenar+uzun_kenar);
	printf("Dikdortgenin cevresi=%.2f birimdir.\n",cevre);
	
	alan=2*kisa_kenar*uzun_kenar;
	printf("Dikdortgenin alani=%.2f birim karedir.\n",alan);

	return 0;
}
