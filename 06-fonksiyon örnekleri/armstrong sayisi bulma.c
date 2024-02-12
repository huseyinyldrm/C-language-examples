#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
armstrong sayisi= n basamakli bir dogal sayi icin abc=(a^n)+(b^n)+(c^n) olursa armstrong sayisi olur.//
ornek=153=(1^3)+(5^3)+(3^3)=1+125+27=153
ornek=1634=(1^4)+(6^4)+(3^4)+(4^4)=1+1296+81+256=1634
*/
int SayiArmstrongMu(int sayi){
	int son_basamak,toplam,orijinal_sayi,basamak_sayisi;
	toplam=0;
	orijinal_sayi=sayi;
	
	basamak_sayisi= (int) log10(sayi)+1; // satinin basamak sayisini veren fonksiyondur!!!!//
	
	// her bir basamak icin ustellerinin toplamini hesapla //
	
	while(sayi>0)
	{
		son_basamak=sayi%10; // son basamagi al //
		toplam=toplam+round(pow(son_basamak,basamak_sayisi)); // üstelini al ve hesapla //
		sayi=sayi/10; // son basamagi yok et //
	}
	return (orijinal_sayi==toplam); // toplam sayi orijinal sayi oluncaya kadar devam ettir fonksiyonu demektir.!!!!//
}

int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("Lutfen bir sayi giriniz:");
	scanf("%d",&sayi);
	
	if(SayiArmstrongMu(sayi))
	{
		printf("%d bir armstrong sayidir.\n",sayi);
	}
	else
	{
		printf("%d bir armstrong sayi degildir.\n",sayi);
	}
		

	return 0;
}
