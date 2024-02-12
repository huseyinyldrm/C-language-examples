#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	double sayi,karekok;
	
	printf("Karekoku hesaplanacak sayiyi giriniz:");
	scanf("%lf",&sayi);
	
	
	karekok=sqrt(sayi);  //sqrt fonksiyonu karekok hesabi yapar. tek parametre alir.//
	
	printf("%.2lf sayisinin karekoku=%.2lf",sayi,karekok);
	
	return 0;
}
