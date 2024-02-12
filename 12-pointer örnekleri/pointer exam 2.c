#include <stdio.h>
#include <stdlib.h>

int cubeByReferance(int *nPtr)
{
	*nPtr= *nPtr * *nPtr * *nPtr;
}
int cubeByValue(int n)
{
	return n*n*n;
}

int main(int argc, char *argv[]) {
	int number=6;
	cubeByReferance(&number);
	printf("\nReferance value is=%d\n",number);
	
	printf("\n---------------------------------------------------\n");
	
	cubeByValue(number);
	printf("New value is =%d",number);
	return 0;
}
