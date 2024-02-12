#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


size_t getSize(float *Ptr)
{
	return sizeof(Ptr);
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	float array1[20];
	printf("The number of bytes in the array is =%d\n\n"
	"The number of bytes returned by getSize is=%d\n ",sizeof(array1),getSize(array1));
	
	printf("\n............................................................\n");
	
	int array2[]={10,20,30,40,50,60,70,80,90,100};
	
	int eleman=sizeof(array2)/sizeof(array2[0]); // bu islem ile dizinin kac elemanli oldugu bulunur. //
	printf("Girilen dizinin eleman sayýsi=%d\n\n",eleman);
	
	printf("\n............................................................\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
