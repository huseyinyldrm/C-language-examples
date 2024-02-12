#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	//typecasting() sayi sistemleri (DEGISKEN ARASINDA DONUSUM ISLEMLERI)//
	
    int sayi1=17;
    int sayi2=5;
    
    int tamsayi_bolme_sonucu;
    float gercel_bolme_sonucu_float;
    double gercel_bolme_sonucu_double;
	int gercel_bolme_sonucu_float_tamsayi;
	
	tamsayi_bolme_sonucu=sayi1/sayi2;
	printf("Tamsayi bolme sonucu:%d\n",tamsayi_bolme_sonucu);;
	
	gercel_bolme_sonucu_float=(float)sayi1/sayi2;
	printf("Gercel bolme sonucu float:%f\n",gercel_bolme_sonucu_float);
	
	gercel_bolme_sonucu_double=(double)sayi1/sayi2;
	printf("Gercel bolme sonucu double:%.2f\n",gercel_bolme_sonucu_double);
	
	gercel_bolme_sonucu_float_tamsayi=(int)gercel_bolme_sonucu_float;
	printf("Gercek bolme sonucu (float)'in tam sayiya donusturulmus hali:%d\n",gercel_bolme_sonucu_float_tamsayi);
	return 0;
}
