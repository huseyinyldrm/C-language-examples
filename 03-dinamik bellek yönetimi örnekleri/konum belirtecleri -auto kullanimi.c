#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
 4 adet konum belirteci vardir: auto,extern,static,register. 2 adet tür derleyici vardir: restrict ve volatile //
 aksi belirtilmedikce butun degiskenler auto kabul edilir.//	
 depolama konumunu belirlerler. auto deger verilirse de ilk deger kabul edilirdi.  
*/	

void DegerArttir(int k)
{
	auto int i=0;
	printf("%d ",i);
	i+=k;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");

printf("\n.............auto belirtecinin kullanýmý ................\n");
   //auto fonksiyon tanimi main fonksiyonunun disinda tanimlanir.//
   
   DegerArttir(3);
   DegerArttir(3);
   DegerArttir(3);
   DegerArttir(3);
   

	return 0;
}
