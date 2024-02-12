#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	int a;
	int *aPtr;
	a=7;
	aPtr=&a;
	printf(" The adress of a is =%p\n The value of aPtr is %p\n",&a,aPtr);
	printf(" The value  of a is =%d\n The value of aPtr is %d\n",a,*aPtr);
	printf(" Showing that * and & are comlament of each other\n *aPtr=%p\n *&aPtr=%p\n",&*aPtr,*&aPtr);
	return 0;
	
}
