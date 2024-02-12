#include <stdio.h>
#include <stdlib.h>
/*
 kac defa yinelenecegi belli ise "for" belli degil ise uygulamada belli oluyorsa "while" fonksiyonu kullanilir.//
 do-while : en az bir defa yapilmasi gereken yinelemeli is varsa kullanilir.//
 dongu kirma=break;  dongude adým attirma=continue;
*/



int main(int argc, char *argv[]) {

  int intager_1,ust_sinir;
  printf("Ust sinir degerini giriniz:");
  scanf("%d",&ust_sinir);
  
  printf("1\'den %d\'ye kadar olan tum sayma sayilari:\n",ust_sinir);
  
  // dongu sayacini 1 den baslat (intager_1=1) ust_sinir degerine kadar git(intager_1<=ust_sinir) her seferinde sayaci bir arttir(intager_1++)//
  
  for(intager_1=1;  intager_1<=ust_sinir; intager_1++){
  	printf("%d\n",intager_1);
  	
  }
  

	return 0;
}
