#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float taban,dik_kenar,alan;
    
    printf("Ucgenin taban olcusunu giriniz:");
    scanf("%f",&taban);
    
    printf("Ucgenin dik kenar olcusunu giriniz:");
    scanf("%f",&dik_kenar);
    
    printf("\n\n");
    alan=(taban*dik_kenar)/2;
    printf("Ucgenin alani %.2f birim karedir.\n",alan);

	return 0;
}
