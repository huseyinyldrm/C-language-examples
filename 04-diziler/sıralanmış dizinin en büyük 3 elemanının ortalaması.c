#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int a[10];
	int hold,pass,i,j;
	int toplam=0;
	float ort=0;
	
	for(i=0; i<10; i++){
		printf("10 tane dizi elemani giriniz:");
		scanf("%d",&a[i]);
	}
	
	for(pass=1; pass<10; pass++){ // diziyi kucukten buyuge dogru siralar.//
		for(j=0; j<9; j++){
			if(a[j]>a[j+1]){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
			}
		}
		printf("\n");
	}
	
	printf("Siralanmis Dizi:");
	
	for(i=0; i<10; i++){
		printf("%d ",a[i]);
	}
	
	for(i=9; i>=7; i--){   // burada dizinin en buyuk 3 elemani toplanir!!!! //
		toplam= toplam+a[i];
	}
	
	printf("\nEn buyuk 3 elemanin toplami =%d",toplam);
	
	ort=(float)toplam/3;
	printf("\nEn buyuk 3 elemanin ortalamasi=%.2f",ort);
	
	return 0;
}
