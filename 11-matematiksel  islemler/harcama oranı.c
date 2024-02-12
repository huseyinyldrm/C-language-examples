#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	double market;
	double fatura;
	double  diger;
	double  toplamGelir;
	
	printf("Toplam gelirinizi giriniz: ");
	scanf("%d",&toplamGelir);
	
	printf("Market harcamasini giriniz: ");
	scanf("%d",&market);
	printf("Faturalarinizi giriniz: ");
	scanf("%d",&fatura);
	printf("Diger harcamalarinizi giriniz: ");
	scanf("%d",&diger);
	
	printf("**************************************\n");
	
	printf("Market harcamalarinin gelire orani= %lf\n", (market/toplamGelir)*100);
	printf("Fatura harcamalarinin gelire orani= %lf\n", (fatura/toplamGelir)*100);
	printf("Diger harcamalarinin gelire orani= %lf\n", (diger/toplamGelir)*100);
	
	return 0;
}
