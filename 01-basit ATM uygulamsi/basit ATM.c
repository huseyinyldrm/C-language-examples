#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void islemler(int secim)
{
		
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("1-Bakiye Sorgulama\n");
	printf("2-Hesaba Para Yat�rma\n");
	printf("3-Hesaptan Para �ekme\n");
	printf("4-Hesaba Para G�nderme\n");
	printf("5-��k��\n");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	
	int cekilecekMiktar;
	int bakiye=10000;
	int yatirilacakMiktar;
	int onay1,onay2,onay3,onay4;// her i�lem i�in ayr� onay al�nd�.
	int secim;
	int sifre=1234;
	int musteriParola;
	int hak=1; //�ifre sorgulama, toplam 3 hak var
	int gonderilecekMiktar;
	int aliciIban=5001;
	int girilenIban;

	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("BANKAMIZA HO� GELD�N�Z\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("L�tfen D�rt Haneli �ifrenizi Giriniz:\n");
	scanf("%d",&musteriParola);
	
	do{
	
	
	if(musteriParola==sifre){
		
    	islemler(secim);// fonksiyondan i�lem listesi �a��r�ld�.
    	printf("L�tfen yapmak istedi�iniz i�lemi giriniz:\n");
	
    	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    	printf("Se�im: ");
    	scanf("%d",&secim);
	
	if(secim==1){
		
		printf("Mevcut Bakiyeniz:%d TL dir. ",bakiye);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
		
	}//se�im 1 sonu
	
	else if(secim==2){
	
		printf("Yat�rmak �stedi�iniz Miktar� Giriniz:");
		scanf("%d",&yatirilacakMiktar);
		
		
		printf("Yapt���n�z ��lemi Onayl�yor musunuz?\n\n");
		printf("1-Evet\n");
		printf("2-Hay�r\n");
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("Se�im: ");
		scanf("%d",&onay1);
		
		if(onay1==1){
			bakiye=bakiye + yatirilacakMiktar;
			printf("Onay�n�z al�nm��t�r.G�ncel bakiyeniz:%d TL dir.\n",bakiye);
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
		}
		else if(onay1==2){
			printf("Onay�n�z al�nmam��t�r.Mevcut bakiyeniz:%d TL dir.\n",bakiye);
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
		}
		
	}//se�im 2 sonu
	
	else if(secim==3){
		printf("�ekmek �stedi�iniz Para Miktar�n� Giriniz:");
		scanf("%d",&cekilecekMiktar);
		
		if(cekilecekMiktar>bakiye){
			printf("�ekece�iniz para miktar� mevcut bakiyenizden fazlad�r.\n");
			printf("E�er bunu onaylarsan�z borcunuz olacakt�r.Onayl�yor musunuz?\n\n");
			printf("1-Evet\n");
			printf("2-Hay�r\n");
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Se�im: ");
			scanf("%d",&onay2);
			if(onay2==1){
				bakiye=bakiye-cekilecekMiktar;
				printf("Onay�n�z al�nm��t�r.Mevcut bakiyeniz:%d TL dir.\n",bakiye);
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
				
			}
			else if(onay2==2){
				printf("��leminiz Onaylanmad�.\n");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
			}
		}//i� if sonu
		
		else{
			printf("�ekmek istedi�iniz para miktar�:%d TL dir.Onayl�yor musunuz?\n",cekilecekMiktar);
			printf("1-Evet\n");
			printf("2-Hay�r");
			printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			printf("Se�im: ");
			scanf("%d",&onay4);
			
			if(onay4==1){
				bakiye=bakiye-cekilecekMiktar;
			    printf("Onay�n�z al�nm��t�r.Bakiyenizden %d TL �ekilmi�tir.G�ncel bakiyeniz:%d TL dir.\n",cekilecekMiktar,bakiye);
			    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			    printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
			}
			else{
				printf("��leminiz onaylanmad�.\n");
				printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
				
			}

		}//else sonu
		
	}//se�im3 sonu
	
	else if(secim==4){
		printf("G�nderece�iniz Miktar� giriniz:");
		scanf("%d",&gonderilecekMiktar);
		
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		
		printf("Al�c�n�n �BAN numaras�n� giriniz:");
		scanf("%d",&girilenIban);
		
		if(girilenIban==aliciIban){
			
			if(bakiye<gonderilecekMiktar){
				printf("G�ndermek istedi�iniz para miktar� mevcut bakiyenizden fazlad�r.\n");
				printf("E�er bunu onaylarsan�z borcunuz olacakt�r.Onayl�yor musunuz?\n\n");
				printf("G�ndermek istedi�iniz para miktar� %d TL dir. Onayl�yor musunuz?\n\n",gonderilecekMiktar);
			    printf("1-Evet\n");
			    printf("2-Hay�r");
			    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			    printf("Se�im:");
			    scanf("%d",&onay3);
			
			    if(onay3==1){
				    bakiye=bakiye-gonderilecekMiktar;
				    printf("��leminiz onaylanm��t�r.Kalan bakiyeniz:%d TL dir.\n",bakiye);
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
				
			    }
			    else if(onay3==2){
				    printf("��leminiz onaylanmam��t�r.\n");
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
			    }

			}//i� if sonu
			
			else{
				printf("G�ndermek istedi�iniz para miktar� %d TL dir. Onayl�yor musunuz?\n\n",gonderilecekMiktar);
			    printf("1-Evet\n");
			    printf("2-Hay�r");
			    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
			    printf("Se�im:");
			    scanf("%d",&onay4);
			
			    if(onay4==1){
				    bakiye=bakiye-gonderilecekMiktar;
				    printf("��leminiz onaylanm��t�r.Kalan bakiyeniz:%d TL dir.\n",bakiye);
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
				
			    }
			    else if(onay4==2){
				    printf("��leminiz onaylanmam��t�r.\n");
				    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				    printf("Ba�ka bir i�lem yapmak istiyor musunuz?");
			    }
				
			}//else sonu
			
		}//d�� if sonu
		
	}//se�im 4 sonu
	
	else if(secim==5){
		printf("��k�� yap�l�yor.�yi g�nler dileriz.");
	}//se�im 5 sonu
	
	else{
		printf("Ge�erli bir i�lem giriniz!!");
	}
	
}// parola sorgusu i�lemindeki if �art�n�n  biti�i parola yanl�� girilirse devreye girer.

    else{
    	if(musteriParola!=sifre){
	    
     		do{
	    		printf("L�tfen �ifrenizi hatas�z giriniz!\n");
	            scanf("%d",&musteriParola);
	        
	            if(hak==3){
                 	printf("�ifrenizi �� kere yanl�� girdiniz.Kart�n�z bloke olmu�tur.\n");
                 	printf("Kart�n�z i�in bankaya gidebilirsiniz.\n");
                 	printf("Kart�n�z� almak i�in l�tfen 5 tu�una bas�n�z.\n");
                 	printf("5 Tu�u: ");
                 	scanf("%d",secim);
	            }// i� if biti�i
	            
	            hak++;// bu yaz�lmazsa s�rekli d�ng�ye girer.
	            
            }while(hak<=3);// do-while biti�i
        
       	}//d�� if biti�i
	
    }// else biti�i 

}while(secim!=5);// do whilenin biti�i 5 tu�una bas�lmad��� s�rece devam ettirir d�ng�y�

	return 0;
}
