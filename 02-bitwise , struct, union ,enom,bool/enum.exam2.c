#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

 //KULLANICI TANIMLI DEÐÝÞKENLER

// 1) struct= class'in atasidir. Birdeen fazla deðisken tanimlar,birden fazla veriyi tanimlar ve alani genistir.
// 2) union= birlesim demektir.sadece bir veri yapisi tutar. Bir deger degisirse digerleride deðisir.bellek sikintisinda kullanilabilir.
// 3) enum= Numaralandirilmis tipler.Sadece belirli degerler alan verilerde kullanilir.(kan grubu vb).   


enum Seviyeler{
	
	DUSUK=14,
	ORTA=20,
	YUKSEK=25,
};


int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	enum Seviyeler OdaSicakligi=DUSUK;
  
    printf("%d",OdaSicakligi);
  
  
  //NOT= buyuk kucuk harflere dikkat et!!!!//
	
	
	return 0;
}
