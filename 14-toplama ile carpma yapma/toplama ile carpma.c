#include <stdio.h>
#include <locale.h>
// Toplama ile �arpma fonksiyonu
int ToplamaileCarpma(int sayi1, int sayi2) {
    int sonuc = 0;

    for (int i = 0; i < sayi1; i++) {
        sonuc = sonuc + sayi2;
    }

    return sonuc;
}

int main() {
	setlocale(LC_ALL,"Turkish");
	
    int sayi1, sayi2;

    // Kullan�c�dan iki say�y� al
    printf("Birinci sayiyi girin: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", &sayi2);

    // Toplama ile �arpma i�lemi yap
    int carpimSonucu = ToplamaileCarpma(sayi1, sayi2);

    // Sonucu ekrana yazd�r
    printf("Girilen sayilarin carpimi (toplama ile): %d\n", carpimSonucu);

    return 0;
}

