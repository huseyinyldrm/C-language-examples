#include <stdio.h>
#include <stdlib.h>

float CemberCapiniHesapla(float yaricap); 
float CemberAlaniniHesapla(float yaricap);
float CemberCevresiniHesapla(float yaricap);
float pi=3.14;


int main(int argc, char *argv[]) {
	
	float yaricap,cap,cevre,alan;
	
	printf("Cemberin yaricapini giriniz:");
	scanf("%f",&yaricap);
	
	// cap , cevre, alan degerlerini hesapla //
	cap=CemberCapiniHesapla(yaricap);
	cevre=CemberCevresiniHesapla(yaricap);
	alan=CemberAlaniniHesapla(yaricap);
	
	// tüm sonuclari yazdir //
	
	printf("Cemberin capi %.2f birimdir.\n",cap);
	printf("Cemberin alani %.2f birim karedir.\n",alan);
	printf("Cemberin cevresi %.2f birimdir.\n",cevre);
	

	return 0;
}
//yaricapi verilen cemberin capini hesaplayan fonksiyon //

float CemberCapiniHesapla(float yaricap)
{
	return (2*yaricap);
}

// yaricapi verilen cemberin alanini hesaplayan fonksiyon //

float CemberAlaniniHesapla(float yaricap)
{
	return (pi*yaricap*yaricap);
}

// yaricapi verilen cemberin cevresini hesaplayan fonksiyon //

float CemberCevresiniHesapla(float yaricap)
{
	return (2*pi*yaricap);
}
