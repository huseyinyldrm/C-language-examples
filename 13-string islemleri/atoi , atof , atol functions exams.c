#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// 1)atoi fonksiyonu= Argumanýný bir int degerine cevirir.Fonksiyon int olur. (int atoi(const char *nPtr))
	// 2)atof fonksiyonu= Bagimsiz degiskeni bir cift degere dondurur. (double atof(const char *nPtr))
	// 3)atol fonksiyonu= Argumanini uzun bir degere donusturur. Fonksiyon uzun degeri dondurur.(long atol(const char *nPtr))
	
	double a;
	a=atoi("2593");
	printf("%s%.3f\n%s%.3f\n","The string \"2593\" converted to int is ",a,"The converted value minus 593 is ",a-593);
	
	printf("\n\n------------------------------------------\n\n");
	
	double b;
	b=atof("99.0");
	printf("%s%.3f\n%s%.3f\n","The string \" 99.0\" converted to double is ",b,"The converted value divided by 2 is ",b/2);
	
	printf("\n\n------------------------------------------\n\n");
	
	
	long c;
	c=atol("1000000");
	printf("%s%ld\n%s%ld\n","The string \"1000000\" converted to long int is ",c,"The converted value divited by 2 is ",c/2);
	
	return 0;
}
