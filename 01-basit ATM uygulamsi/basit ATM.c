#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void islemler(int secim)
{
		
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("1-Bakiye Sorgulama\n");
	printf("2-Hesaba Para Yatýrma\n");
	printf("3-Hesaptan Para Çekme\n");
	printf("4-Hesaba Para Gönderme\n");
	printf("5-Çýkýþ\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int cekilecekMiktar;
	int bakiye=10000;
	int yatirilacakMiktar;
	int onay1,onay2,onay3,onay4;// her iþlem için ayrý onay alýndý.
	int secim;
	int sifre=1234;
	int musteriParola;
	int hak=1; //þifre sorgulama, toplam 3 hak var
	int gonderilecekMiktar;
	int aliciIban=5001;
	int girilenIban;

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("BANKAMIZA HOÞ GELDÝNÝZ\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Lütfen Dört Haneli Þifrenizi Giriniz:\n");
	scanf("%d",&musteriParola);
	
	do{
	
	
	if(musteriParola==sifre){
		
    	islemler(secim);// fonksiyondan iþlem listesi çaðýrýldý.
    	printf("Lütfen yapmak istediðiniz iþlemi giriniz:\n");
	
    	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    	printf("Seçim: ");
    	scanf("%d",&secim);
	
	if(secim==1){
		
		printf("Mevcut Bakiyeniz:%d TL dir. ",bakiye);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Baþka bir iþlem yapmak istiyor musunuz?");
		
	}//seçim 1 sonu
	
	else if(secim==2){
	
		printf("Yatýrmak Ýstediðiniz Miktarý Giriniz:");
		scanf("%d",&yatirilacakMiktar);
		
		
		printf("Yaptýðýnýz Ýþlemi Onaylýyor musunuz?\n\n");
		printf("1-Evet\n");
		printf("2-Hayýr\n");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Seçim: ");
		scanf("%d",&onay1);
		
		if(onay1==1){
			bakiye=bakiye + yatirilacakMiktar;
			printf("Onayýnýz alýnmýþtýr.Güncel bakiyeniz:%d TL dir.\n",bakiye);
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Baþka bir iþlem yapmak istiyor musunuz?");
		}
		else if(onay1==2){
			printf("Onayýnýz alýnmamýþtýr.Mevcut bakiyeniz:%d TL dir.\n",bakiye);
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Baþka bir iþlem yapmak istiyor musunuz?");
		}
		
	}//seçim 2 sonu
	
	else if(secim==3){
		printf("Çekmek Ýstediðiniz Para Miktarýný Giriniz:");
		scanf("%d",&cekilecekMiktar);
		
		if(cekilecekMiktar>bakiye){
			printf("Çekeceðiniz para miktarý mevcut bakiyenizden fazladýr.\n");
			printf("Eðer bunu onaylarsanýz borcunuz olacaktýr.Onaylýyor musunuz?\n\n");
			printf("1-Evet\n");
			printf("2-Hayýr\n");
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Seçim: ");
			scanf("%d",&onay2);
			if(onay2==1){
				bakiye=bakiye-cekilecekMiktar;
				printf("Onayýnýz alýnmýþtýr.Mevcut bakiyeniz:%d TL dir.\n",bakiye);
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("Baþka bir iþlem yapmak istiyor musunuz?");
				
			}
			else if(onay2==2){
				printf("Ýþleminiz Onaylanmadý.\n");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("Baþka bir iþlem yapmak istiyor musunuz?");
			}
		}//iç if sonu
		
		else{
			printf("Çekmek istediðiniz para miktarý:%d TL dir.Onaylýyor musunuz?\n",cekilecekMiktar);
			printf("1-Evet\n");
			printf("2-Hayýr");
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Seçim: ");
			scanf("%d",&onay4);
			
			if(onay4==1){
				bakiye=bakiye-cekilecekMiktar;
			    printf("Onayýnýz alýnmýþtýr.Bakiyenizden %d TL çekilmiþtir.Güncel bakiyeniz:%d TL dir.\n",cekilecekMiktar,bakiye);
			    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			    printf("Baþka bir iþlem yapmak istiyor musunuz?");
			}
			else{
				printf("Ýþleminiz onaylanmadý.\n");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("Baþka bir iþlem yapmak istiyor musunuz?");
				
			}

		}//else sonu
		
	}//seçim3 sonu
	
	else if(secim==4){
		printf("Göndereceðiniz Miktarý giriniz:");
		scanf("%d",&gonderilecekMiktar);
		
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		
		printf("Alýcýnýn ÝBAN numarasýný giriniz:");
		scanf("%d",&girilenIban);
		
		if(girilenIban==aliciIban){
			
			if(bakiye<gonderilecekMiktar){
				printf("Göndermek istediðiniz para miktarý mevcut bakiyenizden fazladýr.\n");
				printf("Eðer bunu onaylarsanýz borcunuz olacaktýr.Onaylýyor musunuz?\n\n");
				printf("Göndermek istediðiniz para miktarý %d TL dir. Onaylýyor musunuz?\n\n",gonderilecekMiktar);
			    printf("1-Evet\n");
			    printf("2-Hayýr");
			    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			    printf("Seçim:");
			    scanf("%d",&onay3);
			
			    if(onay3==1){
				    bakiye=bakiye-gonderilecekMiktar;
				    printf("Ýþleminiz onaylanmýþtýr.Kalan bakiyeniz:%d TL dir.\n",bakiye);
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Baþka bir iþlem yapmak istiyor musunuz?");
				
			    }
			    else if(onay3==2){
				    printf("Ýþleminiz onaylanmamýþtýr.\n");
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Baþka bir iþlem yapmak istiyor musunuz?");
			    }

			}//iç if sonu
			
			else{
				printf("Göndermek istediðiniz para miktarý %d TL dir. Onaylýyor musunuz?\n\n",gonderilecekMiktar);
			    printf("1-Evet\n");
			    printf("2-Hayýr");
			    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			    printf("Seçim:");
			    scanf("%d",&onay4);
			
			    if(onay4==1){
				    bakiye=bakiye-gonderilecekMiktar;
				    printf("Ýþleminiz onaylanmýþtýr.Kalan bakiyeniz:%d TL dir.\n",bakiye);
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Baþka bir iþlem yapmak istiyor musunuz?");
				
			    }
			    else if(onay4==2){
				    printf("Ýþleminiz onaylanmamýþtýr.\n");
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Baþka bir iþlem yapmak istiyor musunuz?");
			    }
				
			}//else sonu
			
		}//dýþ if sonu
		
	}//seçim 4 sonu
	
	else if(secim==5){
		printf("Çýkýþ yapýlýyor.Ýyi günler dileriz.");
	}//seçim 5 sonu
	
	else{
		printf("Geçerli bir iþlem giriniz!!");
	}
	
}// parola sorgusu iþlemindeki if þartýnýn  bitiþi parola yanlýþ girilirse devreye girer.

    else{
    	if(musteriParola!=sifre){
	    
     		do{
	    		printf("Lütfen Þifrenizi hatasýz giriniz!\n");
	            scanf("%d",&musteriParola);
	        
	            if(hak==3){
                 	printf("Þifrenizi üç kere yanlýþ girdiniz.Kartýnýz bloke olmuþtur.\n");
                 	printf("Kartýnýz için bankaya gidebilirsiniz.\n");
                 	printf("Kartýnýzý almak için lütfen 5 tuþuna basýnýz.\n");
                 	printf("5 Tuþu: ");
                 	scanf("%d",secim);
	            }// iç if bitiþi
	            
	            hak++;// bu yazýlmazsa sürekli döngüye girer.
	            
            }while(hak<=3);// do-while bitiþi
        
       	}//dýþ if bitiþi
	
    }// else bitiþi 

}while(secim!=5);// do whilenin bitiþi 5 tuþuna basýlmadýðý sürece devam ettirir döngüyü

	return 0;
}
