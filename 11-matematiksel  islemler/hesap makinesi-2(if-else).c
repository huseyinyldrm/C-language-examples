#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
  int say1,say2;
  int sec;
  
  printf("Birinci sayiyi giriniz:");
  scanf("%d",&say1);
  
  printf("Ikinci sayiyi giriniz:");
  scanf("%d",&say2);
  
  printf("\n...seciminizi giriniz...\n");
  
  printf("1.Toplama\n");
  printf("2.Cikarma\n");
  printf("3.Carpma\n");
  printf("4.Bolme\n");
  
  printf("Seciminizi giriniz:");
  scanf("%d",&sec);
  
  if(sec==1){
  	printf("Toplama isleminin sonucu %d olur.",say1+say2);
  }
  else if(sec==2){
  	printf("Cikarma isleminin sonucu %d olur.",say1-say2);
  }
  else if(sec==3){
  	printf("Carpma isleminin sonucu % d olur.",say1*say2);
  }
  else if(sec==4){
  	printf("Bolme isleminin sonucu %.2f olur.",(float)say1/say2);
  }
  else{
  	printf("Gecersiz islem!!!");
  }
	
	
	return 0;
}
