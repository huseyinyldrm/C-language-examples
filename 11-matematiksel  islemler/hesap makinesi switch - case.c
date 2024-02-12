#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    char islem;
    float sayi1,sayi2,sonuc=0.0f;
    
    printf("BASIT HESAP MAKINESI UYGULAMASI\n");
    
    printf("\n..............................\n");
    printf("Lutfen [sayi1] [+-/*] [sayi2] giriniz:\n");
    scanf("%f%c%f",&sayi1,&islem,&sayi2);
    
    switch (islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			break;
		case '-':
			sonuc=sayi1-sayi2;
			break;
		case '*':
		    sonuc=sayi1*sayi2;
		    break;
		case '/':
		    sonuc=sayi1/sayi2;
			break;
		default :
		    printf("Gecersiz islem....");		
	}
	
	printf("%.2f %c %.2f =%.2f",sayi1,islem,sayi2,sonuc);
	

	return 0;
}
