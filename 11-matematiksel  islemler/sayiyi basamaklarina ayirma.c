#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int sayi, basamak, sonuc=0, kalan;
	int n=0;
 
    printf("Sayi Giriniz: ");
    scanf("%d", &sayi);
    
    basamak = sayi;
    
    while ( basamak > 0 ){    // Basamak 0 olana kadar devam etsin 
        
        kalan = basamak %10;
        basamak /= 10;    
        n++;                 // n. basamagi temsil eder..
        printf("%d. basamak=%d\n",n, kalan);
    }
    
   
	return 0;
}
