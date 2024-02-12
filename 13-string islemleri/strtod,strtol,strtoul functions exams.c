#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/* 4) strtod fonksiyonu= Bir kayan nokta degerini temsil eden bir karakter dizisini ikiye donusturur.
	   Fonksiyon iki bagimsiz degisken alir , biri string(char*) biri de stringe yonelik bir isaretci(char**).
	   double strtod(const char *nPtr ,char** endPtr)
	   
	   5) strtol fonksiyonu= Bir tamsayiyi temsil eden uzun bir karakter dizisine donusturur.Fonksiyon bir string(char*)
	   bir string isaretcisi ve bir de tamsayi olmak uzere 3 tane arguman alir.
	   -> isaretci=Stringin donusturulen kismindan sonraki ilk karakterin konumunu atar.
	   -> tamsayi= Donusturulmekte olan degerin tabanini belirtir.(Genelde 0 verilir.)
	   long strtol(const char* nPtr , char **endPtr , int base)
	   
	   6) strtoul fonksiyonu= Isaretsiz bir uzun tamsayiyi temsil eden isaretsiz uzun karakterlere donusturur.strtol ile ayni kullanilir.
	   unsigned long strtoul(const char *nPtr ,char **endPtr, int base)
	   
	*/
	
	const char *string="51.2% are atmitted";
	double d;
	char *stringPtr;
	
	d=strtod(string,&stringPtr);
	printf("The string \"%s\" is converted to the \n"
	"Double value %.2f and the string\" %s \"\n",string,d,stringPtr);    
	
	printf("\n\n..............................................\n\n");
	
	const char *string1="-123456789abc";
	long x;
	char *remainderPtr;
	x=strtol(string1,&remainderPtr,0);
	
	printf("%s\" %s \"\n%s%ld\n%s\" %s \" \n%s%ld\n","The original string is ",string1,"The converted value is ",x,
	"The remainder of the original string is ",remainderPtr,"The converted value plus 789 is ",x+789);
	
	printf("\n\n..............................................\n\n");
	
	const char *string2="123456789abc";
	unsigned long y;
	char *rememberPtr;
	y=strtoul(string2,&rememberPtr,0);
	
	printf("%s\" %s \" \n %s%lu\n %s \" %s \"\n%s%lu ","The original string is ",string2,"The converted value is ",y,
    "The remainder of the original string is ",rememberPtr,"The converted value minus 789 is ",y-789);
	
	
	return 0;
}
