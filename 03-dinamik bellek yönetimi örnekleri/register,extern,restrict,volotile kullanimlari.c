#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x=10;
int y=20;

void example_function(int *restrict a, int *restrict b, int *restrict result) {
    for (int i = 0; i < 10; ++i) {
        result[i] = a[i] + b[i];
    }
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	
	printf("\n..............register belirtecinin kullanimi ................\n");  
   	
   	register int hacim;
   	int sayi_dizisi[5]={21,12,13,14,15};
   	for(hacim=0; hacim<5; hacim++)
	   {
   		 printf("sayi_dizisi[%d]=%d\n",hacim,sayi_dizisi[hacim]);
	   }
	   
   // büyük verileri registerde tutmak zor olabilir.yer yer olmayabilir.//
	
printf("\n....................extern  belirtecinin kullanimi ................\n");
 
  extern int y; // extern olarak tanýmlanmazsa deðer 0 olarak atanýr.
  // bir deðiþken veya bir fonksiyonun, bildirilen dosyanýn dýþýnda harici bir baðlantý olduðunu bildirir.// 
  printf("global olan x degiskeninin degeri:%d\n",x);
  printf("extern olan y degiskeninin degeri:%d\n",y);

  
	
printf("\n...................resrict  belirtecinin kullanimi ................\n");
  
  	int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int result[10];

    example_function(array1, array2, result);

    for (int i = 0; i < 10; ++i) {
        printf("%d ", result[i]);
    }

  	// z restrict oldugu icin derleyici olusturacagi assembly code'unda z degerini tekrar yüklemeyecek.//
  	// dolayisiyla assembly code daha optimize ve hizli çalismis olacak.//
  	// özellikle bir degeri bolca ve farkli degerler verilerek kullanilacaksa restrict kullanilabilir.//

  
	
/*
..................volotile  belirtecinin kullanimi ................

restrict'in aksine her erisimde gidilip ilgili adresteki degerin okunmasi yonunde derleyiciye uyari vermekte.//
neden volotile= gomulu yazilimlar,multithreaded yazilimlar,paylasimli bellek kullanilan yazilimlar.//
her seferinde gidilip ilgili adresin en guncel degerini okur!!! //
*/
	return 0;
}
