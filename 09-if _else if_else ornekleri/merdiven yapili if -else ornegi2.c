#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// merdiven yapili if ve else yapilari //
  int S1,S2,S3,max;
  
  printf("Lutfen üc sayi giriniz:");
  scanf("%d%d%d",&S1,&S2,&S3);
  
  if((S1>S2)&&(S1>S3)){
  	max=S1;
  }
  
  else if((S2>S3)&&(S2>S1)){
  	max=S2;
  	
  }
  else if((S3>S1)&&(S3>S2)){
  	max=S3;
  	
	}
  printf("Uc sayi icindeki en buyuk degerli sayi:%d",max);
  
  printf("\n................................................\n");
  
// ustteki ornek su sekilde de yapilabilir//

   int s_bir,s_iki,s_uc,s_max;
   
   printf("Lutfen uc sayi giriniz=");
   scanf("%d%d%d",&s_bir,&s_iki,&s_uc);
   
   if((s_bir>s_iki)&&(s_bir>s_uc)){
   	s_max=s_bir;
   }
   
   else if((s_iki>s_uc)){
   	s_max=s_iki;
   }
   
   else{
   	s_max=s_uc;
   }
   
   printf("Uc sayi icindeki en buyuk deger=%d",s_max);
	return 0;
}
