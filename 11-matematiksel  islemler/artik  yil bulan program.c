#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int yil;
	printf("Yil degerini giriniz: ");
	scanf("%d",&yil);
	
	if((yil%4==0) && (yil%100!=0)||(yil%400==0)){
		printf("%d , artik yildir.",yil);
		
    }
    else{
    	printf("%d , artik yil degildir.",yil);
	}

	return 0;
}
