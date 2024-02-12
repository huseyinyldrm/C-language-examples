#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define VERI_BOYUTU 1000

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
    printf("\n.............DOSYA OKUMA VE YAZMA ISLEMLERI................\n");
    
    // kutuphaneden #include <stdlib.h> cagirilir, #define VERI_BOYUTU 1000 seklinde veri boyutu tanimlanir.//
    // "w+" modu dosyayi yazma modunda acar ve bir seyler eklemeye yarar.//
    
    char veri[VERI_BOYUTU]; //veri boyutunu depolayan karakter dizisi//
    FILE*fPtr; // Dosyamiza referansi tutacak dosya isaretcisi
    
    fPtr=fopen("dosya1.txt","w+"); // dosyayi write modunda ac. "dosya1.txt" dosyasinin guzergahi//
    
	
	if(fPtr==NULL)  //fopen eger basarisiz olursa NULL doner.//
	{
		printf("Dosya oluþturulamadý.\n");
		exit(EXIT_FAILURE); // programdan cikarir.//
	}
	
	// dosyaya kaydedilecek olan verileri kullanicidan al//
	
	printf("Dosyaya kaydedilecek olan girdiyi al:\n");
	fgets(veri,VERI_BOYUTU,stdin);
	
	fputs(veri,fPtr); // veriyi dosyaya yaz//
	
	 fclose(fPtr); // dosyayi kapat. herzaman fopen ve fclose yi alt alta yaz sonra islem yap..//
    
	
	printf("Dosya basariyla olusturuldu ve kaydedildi.\n");
	

	return 0;
}
