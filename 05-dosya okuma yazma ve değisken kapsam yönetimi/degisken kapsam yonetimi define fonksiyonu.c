#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define BUYUK_SAYI 1000000

int BelirliIslemlerGerceklestir(int girdi)
{
	return (girdi<BUYUK_SAYI);  // 65.örnek için //
	// return (girdi<BASKA_BUYUK_SAYI); gibi bir satir olursa hata verir...//
}



int main(int argc, char *argv[]) {
	
  setlocale(LC_ALL,"Turkish");
	
  printf("\n\n............DEGISKEN KAPSAM YONETIMI-DEFINE FONKSIYONU................\n\n");
  int ilk_degisken=20;
  int ikinci_degisken=25;
  int sonuc1,sonuc2,sonuc3;
  
  
  const int BASKA_BUYUK_SAYI=10000000;// on milyon //
  printf("Buyuk Sayi=%d\n",BUYUK_SAYI);
  
  sonuc1=(ilk_degisken<BUYUK_SAYI);
  printf("Sonuc1=%d\n",sonuc1);
  
  sonuc2=(ikinci_degisken<BUYUK_SAYI);
  printf("Sonuc2=%d\n",sonuc2);
  
  
  #undef BUYUK_SAYI
  #define BUYUK_SAYI 30000000
  printf("Buyuk Sayi=%d\n",BUYUK_SAYI);
  
  sonuc3=BelirliIslemlerGerceklestir(4000);
  printf("Sonuc3=%d\n",sonuc3);
  
  // define() fonksiyonu sonunda noktali virgul ve esittir isaretleri yoktur//
  // bu fonksiyonda degisiklik yapýlabilir ve kodun her yerinden erisilebilir.//
  // sabit degerlerin tanýmýnýn hepsi buyuk harfle yazilir.(adet olarak)//
  // undef yani undefine fonksiyonu define tanimini kaldirir yeni tanim eklenebilir.//
  // main icerisinde tanimlanan bir seye baska bir fonksiyondan erisemezsin.//
  // main de olan main de kalir misali......//
      
	return 0;
}
