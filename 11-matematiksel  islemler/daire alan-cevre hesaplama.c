#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	float yaricap,cap,cevre,alan;
    float pi=3.14;
    
    printf("Dairenin yaricapini giriniz:");
    scanf("%f",&yaricap);
    
    cap=2*yaricap;
    cevre=2*pi*yaricap;
    alan=pi*(yaricap*yaricap);
    printf("\n\n");
    printf("Dairenin capi= %.2f birimdir.\n",cap);
    printf("Dairenin cevresi= %.2f birimdir.\n",cevre);
    printf("Dairenin alani= %.2f birim karedir.\n",alan);
    
    //COOOK ONEMLI NOT= Pi sayisini girerken araya virgul degil nokta konmalýdýr!!!!!!!! //
	//YA DA kutuphane kismina #define pi 3.14 eklersek de olur.burada da ne esittir isareti ne de virgul kullanýlmaz!!!!//
    
    

	return 0;
}
