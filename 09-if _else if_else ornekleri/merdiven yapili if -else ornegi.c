#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	
  int s1,s2,s3,maksimum;
  
  printf("Lutfen uc sayi giriniz:");
  scanf("%d%d%d",&s1,&s2,&s3);
  
  if(s1>s2){
  	
  	if(s1>s3){
  		maksimum =s1;  //s1>s2 ve s1>s3 ise //
  		
	  }
	  
	else{
		maksimum=s3; // s1>s2 ancak s1>s3 degilse //
	}
	  
  }
  else{
  	if(s2>s3){
  		maksimum=s2;  // s1>s2 degilse ve s2>s3 ise //
	  }
	else{
		maksimum=s3; // s1>s2 degilse ve s2>s3 degilse //
	}  
  }
  
  printf("Uc sayi icindeki en buyuk sayi=%d",maksimum);
  	
	return 0;
}
