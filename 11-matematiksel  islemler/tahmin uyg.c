#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	printf("SAYI TAHMIT ETME OYUNUNA HOSGELDINIZ\n");
	printf("....................................\n");
	
	int sayi1;
	int i=0;
	int sayi2= 0+rand()%101; // 0-100 arasi rastgele sayi uretir.
	srand(time(NULL));
	while(i<10){
	printf("Lutfen 0-100 arasinda bir sayi giriniz:\n");
	scanf("%d",&sayi1);
	printf("...................................\n");
	
	if(sayi1>100){
		printf("Lutfen gecerli bir deger giriniz!!!\n");
		printf(".................................\n");
	}
	
	else if(sayi1<sayi2){
		printf("Yukari\n");
		printf(".............................\n");
	}
	
	else if(sayi1>sayi2){
		printf("Asagi\n");
		printf("..............................\n");
	}
	
	else{
		printf("Tebrikler dogru bildiniz...\n");
		break;
	}
	
	i++;
}

	return 0;
}

