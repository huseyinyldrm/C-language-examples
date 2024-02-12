#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 15

int binarySearch(const int b[],int searcKey,int low , int high);
void printHeader(void);
void printRow(const int b[],int low, int mid, int high);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int a[SIZE];
	int i;
	int key;
	int result;
	
	for(i=0; i<SIZE; i++){
		a[i]=2*i;
	}
	printf("Enter a number between 0 and 28 :");
	scanf("%d",&key);
	
	printHeader();
	
	result= binarySearch(a,key,0,SIZE-1);
	
	if(result!=-1){
		printf("\n%d Found in array element %d\n",key,result);
	}
	else{
		printf("\n %d not found \n",key);
	}
	return 0;
}

int binarySearch(const int b[],int searchKey,int low , int high)
{
	int middle;
	while(low<=high){
		middle=(low+high)/2;
		printRow(b,low,middle,high); // diziyi yinelemesinde kullanilir //
		
		if(searchKey==b[middle]){
			return middle;
		}
		else if(searchKey<b[middle]){
			high=middle-1;
		}
		else{
			low=middle+1;
		}
	} // while bitisi //
} // birinci fonksiyon bitisi //

void printHeader(void)
{
	int i;
	printf("\nSubscribtis:");
	
	for(i=0; i<SIZE; i++){
		printf("%3d",i);
	}
	printf("\n");
	
	for(i=1; i<=4*SIZE; i++){
		printf("-");
	}
	printf("\n");
	
} // ikinici fonksiyon bitisi //
void printRow(const int b[],int low, int mid, int high)
{
	int i;
	
	for(i=0; i<SIZE; i++){
		if(i<low || i>high){
			printf(" ");
		}
		else if (i==mid){
			printf("%3d ",b[i]);
		}
		else{
			printf("%3d ",b[i]);
		}
		
	} // for bitisi // 
	printf("\n");
	
} // ücüncü fonksiyon bitisi //

