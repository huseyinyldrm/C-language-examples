#include <stdio.h>
#include <stdlib.h>

void reverse(const char* const sPtr)
{
	if(sPtr[0]=='\0'){
		return;
	}
	else{
		reverse(&sPtr[1]);
		putchar(sPtr[0]);
	}
}

int main(int argc, char *argv[]) {

	
	/* STANDART GIRIS/CIKIS KUTUPHANELERI
	1) fgets ve putchar fonksiyonlari= Girilen bir metnin satirini okumak ve satirin karakterlerini ters cevirmek icin kullanilirlar.
	fgets fonksiyonu bir satirsonu veya dosya sonu gösregesiyle karsilaþana kadar devam eder.Max karakter sayisi fgets'in 2. bagimsiz
	degiskeninden 1 eksiktir.
	putchar fonksiyonu karakter argumanini yazdirir.Program metin satirini geriye dogru yazdirmak icin özyinelemeli fonk. ters cagirir.
	
	char fgets(char *s, int n.FILE *stream)                 int putchar(int c)
	
	2)getchar ve puts fonksiyonlarý= Standart girdiden karakterleri karakter dizisi cumlesine okutmak ve karakter dizisini bir string
	olarak yazdirmak icin kullanilirlar. 
	int grtchar(void)      int puts(const char *s)
	
	3)sprintf fonksiyonu = Bicimlendirilmis verileri dizi s-bir karakter dizisine yazdirmak icin kullanilir.printf ile ayný görevdedir.
	program bicimlendirilecek ve s dizisine yazdirilacak bir int degeri ve bir cift deger girer. Array s sprintf'in ilk argumanidir.
	int sprintf(char *s,const char *format,...)
	
	4)sscanf fonksiyonu = Karakter dizisi s'den bicimlendirilmis verileri okumak icin kullanilir.scanf ile ayni görevdedir.
	Program s dizisinden bir int ve bir double okur ve degeri x ve y' saklar. x ve y degerleri yazdirilir.Array s sscanf'in ilk argümanidir.
	int sscanf(char *s, const char *format ,...)
	
	*/
	
	char sentence[80];
	printf("Enter a line of text :\n");
	fgets(sentence,80,stdin);
	
	printf("\nThe line printed backword is: \n");
	reverse(sentence);
		
	
	printf("\n\n............................................................\n\n");
	
	char c;
	char cent[80];
	int i=0;
	puts("Enter a line of text:\n");
	
	while ((c=getchar())!='\n'){
		cent[i++]=c;
	}	
	cent[i]='\n';
	
	puts("\nThe line entered was:");
	puts(cent);
	
	printf("\n\n..............................................\n\n");
	
	char s[80];
	int x;
	double y;
	printf("Enter an intager and double :\n");
	scanf("%d%lf",&x,&y);
	
	sprintf(s,"intager :%6d\n double : %8.2f",x,y);
	printf("%s\n%s\n","The formatted output stored in array s is :",s);
	
	printf("\n\n..............................................\n\n");
	
	char b[]="31298 87.325";
	int f;
	double k;
	
	sscanf(b,"%d%lf\n",&f,&k);
	
	printf("%s\n%s%6d\n%s%8.3f\n","The values stored in character array b is:","Ýntager:",f,"Double:",y);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
