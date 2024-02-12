#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	char array[5];
	printf(" array=%p\n &array[0]=%p\n &array=%p\n",array,&array[0],&array);
	return 0;
}
