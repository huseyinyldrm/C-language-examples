#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 99

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[] , const int answer[]);
void bubleSort(int a[]);
void printArray(const int a[]);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Turkish");
	int frequency[10]={0};
	
	int response[SIZE]={1,2,3,4,5,6,7,8,8,9,10,11,12,13,14,15,1,6,1,7,1,8,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,
	44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,78,79,80,81,82,83,84,85,86,
	87,88,89,90,91,92,93,94,95,96,98};
	
	mean(response);
	median(response);
	mode(frequency,response);
	
	
	return 0;
}

void mean(const int answer[])
{
	int j;
	int total=0;
	printf("%s\n%s\n%s\n","**********","MEAN","**********");
	for(j=0; j<SIZE; j++){
		total+=answer[j];
	}
	
	printf("\nBu dizideki eleman sayisi=%d \nBu dizinin aritmetik ortalamasi = %d /%d = %.4f\n",SIZE,total,SIZE,(double)total/SIZE);
} // birinci foksiyonun bitisi//

void median(int answer[])
{
	printf("%s\n%s\n%s\n","**********","MEDÝAN","**********");
	
	printArray(answer);
	bubleSort(answer);
	printArray(answer);
	printf("\n\n The median is element %d of \n The sorted %d element array.\n For this run the median is %d\n\n",SIZE/2,SIZE,answer[SIZE/2]);
	
} //ikinci fonksiyonun bitisi //

void mode(int freq[], const int answer[])
{
	int rating;
	int largest=0;
	int modeValue=0;
	int h,j;
	
	printf("%s\n%s\n%s\n","**********","MODE","**********");
	
	for(rating=1; rating<=9; rating++)
	{
		freq[rating]=0; // initialize frequncies to 0  //
	}
	
	for(j=0; j<SIZE; j++)
	{
		++freq[answer[j]];
	}
	
	printf("%s%11s%19s\n","Response","Frequncy","Histogram");
	
	for(rating=1; rating<=9; rating++){
		printf("%8d%11d           ",rating,freq[rating]);
		
		if(freq[rating]>largest){
			largest=freq[rating];
			modeValue=rating;
		}
		
		for(h=1; h<=freq[rating]; h++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("For this run the mode is %d which occurred %d times.",modeValue,largest);
} // ucuncu fonksiyonun bitisi //

void bubleSort(int a[])
{
	int pass;
	int j,hold;
	
	for(pass=1; pass<SIZE; pass++){
		for(j=0; j<SIZE-1; j++){
			if(a[j]>a[j+1]){
				hold=a[j];
				a[j]=a[j+1];
				a[j+1]=hold;
				
			}
		}
	}
} // dorduncu fonksiyonun bitisi //

void printArray(const int a[])
{
	int j;
	
	for(j=0; j<SIZE; j++){
		if(j%20==0){
			printf("\n");
		}
		printf("%2d",a[j]);
	}
} // besinci fonksiyonun bitisi



