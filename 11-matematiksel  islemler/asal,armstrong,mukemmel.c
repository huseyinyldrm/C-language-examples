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
	
	printf("L�tfen bir say� giriniz:\n");
	scanf("%d",&sayi);
	
	//SayiAsalMi() fonksiyonunu �a��r
	
	if(SayiAsalMi(sayi)){
		printf("%d bir asal say�d�r.\n",sayi);
	}
	else{
		printf("%d bir asal say� de�ildlr.\n",sayi);
	}
	

	//SayiArmstrongMu()vfonksiyonunu �a��r
	

	if(SayiArmstrongMu(sayi)){
		printf("%d bir Armstrong say�d�r.\n",sayi);
	}
	else{
		printf("%d bir Armstrong say� de�ildir.\n",sayi);
	}
	
	//SayiMukemmelMi() fonksiyonunu �a��r
	
	if(SayiMukemmelMi(sayi)){
		printf("%d say�s� M�kemmel say�d�r.\n",sayi);
	}
	else{
		printf("%d say�s� M�kemmel say� de�ildir.\n",sayi);
	}

	return 0;
}


/* ASAL SAYI= kendisinden ve 1 den ba�ka b�leni olmayan say�ya asal say� denir.*/

int (SayiAsalMi(int sayi)){
	int i;
	
	
	for(i=2;i<=sayi/2;i++){
		
		if(sayi%i==0){
			return 0;
		}
		
	}
	return 1;
}

/*ARMSTRONG SAYISI=  n basamakl� bir say� i�in abc = (a^n)+(b^n)+(c^n) ise
*bu say�ya armstrong say�s� denir. �r:153=(1^3)+(5^3)+(3^3)=1+125+27=153
*1634 say�s� gibi...*/

int SayiArmstrongMu(int sayi){
	
	int son_basamak,toplam,orijinal_sayi,basamak_sayisi;
	toplam=0;
	orijinal_sayi=sayi;
	
	
	basamak_sayisi=(int) log10(sayi)+1; //say�n�n ka� basamakl� oldu�unu hesaplar
	
	/* her basamak i�in �stellerinin toplam�n� hesapla*/
	
	while(sayi>0){
		son_basamak=sayi%10;  //son basama�� al
		
		toplam= toplam+round(pow(son_basamak,basamak_sayisi));  //�stelini al�r ve toplar.
		
		sayi=sayi/10; //son basama�� yok eder.
	}
	
	return(orijinal_sayi==toplam);
}


/* M�KEMMEL SAYI= kendisi hari� pozitif tam b�lenlerinin toplam� kendine e�it olan say�lara denir.
*bir say�n�n m�kemmel olup olmad���n� kontrol eden fonksiyon say� m�kemmelse 1 ,de�ilse 0 d�nd�r�r.*/

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



















































