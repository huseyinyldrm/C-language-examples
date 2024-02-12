#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	  
  int intager, maxDeger;
  printf("Ust sinir degerini giriniz:");
  scanf("%d",&maxDeger);
  
  printf("1\'den %d sayisina kadar olan cift sayilar soyledir:\n",maxDeger);
  
  for(intager=1; intager<=maxDeger; intager++){
  	
  	if(intager%2==0){
  		
  		printf("%d\n",intager);
	  }
  }
  

	return 0;
}
