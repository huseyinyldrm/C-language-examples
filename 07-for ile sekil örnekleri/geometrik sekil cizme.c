#include <stdio.h>
#include <locale.h>

void dikdortgen(int height ,int width){
	int i,j;
	for(i=0;i<=height; i++){
		for(j=0; j<=width; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void ucgen(int height){
	int i,j;
	for(i=0; i<=height; i++){
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}
}

void kare(int height,int width){
	int i,j;
	
	for(i=0; i<=height; i++){
		for(j=0; j<=width; j++){
			printf("* ");
		}
		printf("\n");
	}
}

int main(){
	
	int secim,i=0;
	
	printf("\n*********************************\n");
	
	printf("1)Dikdortgen Cizimi:\n");
	printf("2)Ucgen Cizimi     :\n");
	printf("3)Kare Cizimi      :\n");
	
	printf("\n*********************************\n");	
	
	
	
	while(i<3){
		
	printf("Bir tercih yapiniz :");
	scanf("%d",&secim);
	
	
	switch(secim){
		case 1:
			dikdortgen(6,5);
			break;
		case 2:
		    ucgen(6);
			break;
		case 3:
		    kare(6,6);
			break;
		default:
		   printf("\nGecerli bir deger giriniz!!\n");			
	}
	
	i++;
}
	
	return 0;
}
