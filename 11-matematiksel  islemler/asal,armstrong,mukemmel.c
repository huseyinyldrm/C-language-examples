#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int SayiAsalMi(int sayi);
int SayiArmstrongMu(int sayi);
int SayiMukemmelMi(int sayi);


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	
	printf("Lütfen bir sayý giriniz:\n");
	scanf("%d",&sayi);
	
	//SayiAsalMi() fonksiyonunu çaðýr
	
	if(SayiAsalMi(sayi)){
		printf("%d bir asal sayýdýr.\n",sayi);
	}
	else{
		printf("%d bir asal sayý deðildlr.\n",sayi);
	}
	

	//SayiArmstrongMu()vfonksiyonunu çaðýr
	

	if(SayiArmstrongMu(sayi)){
		printf("%d bir Armstrong sayýdýr.\n",sayi);
	}
	else{
		printf("%d bir Armstrong sayý deðildir.\n",sayi);
	}
	
	//SayiMukemmelMi() fonksiyonunu çaðýr
	
	if(SayiMukemmelMi(sayi)){
		printf("%d sayýsý Mükemmel sayýdýr.\n",sayi);
	}
	else{
		printf("%d sayýsý Mükemmel sayý deðildir.\n",sayi);
	}

	return 0;
}


/* ASAL SAYI= kendisinden ve 1 den baþka böleni olmayan sayýya asal sayý denir.*/

int (SayiAsalMi(int sayi)){
	int i;
	
	
	for(i=2;i<=sayi/2;i++){
		
		if(sayi%i==0){
			return 0;
		}
		
	}
	return 1;
}

/*ARMSTRONG SAYISI=  n basamaklý bir sayý için abc = (a^n)+(b^n)+(c^n) ise
*bu sayýya armstrong sayýsý denir. ör:153=(1^3)+(5^3)+(3^3)=1+125+27=153
*1634 sayýsý gibi...*/

int SayiArmstrongMu(int sayi){
	
	int son_basamak,toplam,orijinal_sayi,basamak_sayisi;
	toplam=0;
	orijinal_sayi=sayi;
	
	
	basamak_sayisi=(int) log10(sayi)+1; //sayýnýn kaç basamaklý olduðunu hesaplar
	
	/* her basamak için üstellerinin toplamýný hesapla*/
	
	while(sayi>0){
		son_basamak=sayi%10;  //son basamaðý al
		
		toplam= toplam+round(pow(son_basamak,basamak_sayisi));  //üstelini alýr ve toplar.
		
		sayi=sayi/10; //son basamaðý yok eder.
	}
	
	return(orijinal_sayi==toplam);
}


/* MÜKEMMEL SAYI= kendisi hariç pozitif tam bölenlerinin toplamý kendine eþit olan sayýlara denir.
*bir sayýnýn mükemmel olup olmadýðýný kontrol eden fonksiyon sayý mükemmelse 1 ,deðilse 0 döndürür.*/

int SayiMukemmelMi(int sayi){
	int rakam,toplam,n;
	toplam=0;
	n=sayi;
	
	for(rakam=1;rakam<n;rakam++){
		
		
		if(n%rakam==0){
			toplam+=rakam;
		}
		
	}
	return(sayi==toplam);
}



















































