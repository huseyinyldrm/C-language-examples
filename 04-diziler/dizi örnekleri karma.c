#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define SIZE 10
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11

void staticArrayInit(void)
{
	static int array1[3];
	int i;
	
	printf("\n Values on entering staticArrayInit:\n");
	
	for(i=0; i<=2; i++){
		printf("array1[%d]= %d \n",i,array1[i]);
	}
	
	printf("\n Values on exiting staticArrayInit:\n");
	
	
	for(i=0; i<=2; i++){
		printf("array1[%d]=%d\n",i,array1[i]+=5);
	}
}

void automaticArrayInit(void)
{
	int array2[3]={1,2,3};
	int i;
	
	printf("\n\n Values of entering automaticArrayInit:\n");
	
	for(i=0; i<=2; i++){
		printf("arraay2[%d]=%d\n ",i,array2[i]);
	}
	
	printf("\n Values on exiting automaticArrayInit:\n");
	
	for(i=0; i<=2; i++){
		printf("array2[%d]=%d\n ",i,array2[i]+=5);
	}
}




int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	
	printf("\n-------------arrays with examples-------------\n");
	
	int n[10];
	int i;
	
	for(i=0; i<10; i++){
		n[i]=0;
	}
	printf("%s%13s\n","Elements","Values");
	
	for(i=0; i<10; i++){
		printf("%7d%13d\n",i,n[i]);
	}
	
	printf("\n------------------------------\n");
	
	int a[10]={21,12,13,13,14,15,16,18,17,11};
	int b;
	
	printf("%s%13s\n","Elements","Values");
	
	for(b=0; b<10; b++){
		printf("%7d%13d\n",b,a[b]);
	}
	
	printf("\n------------------------------\n");
	
	int s[SIZE];
	int j;
	
	for(j=0; j<SIZE; j++){
		s[j]=2+2*j;
	}
	
	printf("%s%13s\n","Elements","Values");
	
	for(j=0; j<SIZE; j++){
		printf("%7d%13d\n",j,s[j]);
	}
	
	printf("\n------------------------------\n");
	
	int c[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	int d;
	int total=0;
	
	for(d=0; d<12; d++){
		total+=c[d];
	}
	printf("Total array element values=%d",total);
	
	printf("\n------------------------------\n");
	
	int answer;
	int rating;
	int frequency[FREQUENCY_SIZE]={0};
	int responses[RESPONSE_SIZE]={1,3,3,2,4,5,4,2,5,6,5,3,2,
	3,4,4,5,6,7,8,9,0,8,7,6,5,4,3,3,2,1,2,2,3,4,4,4,5,3,2};
	
	for(answer=0; answer<RESPONSE_SIZE; answer++){
		++frequency[responses[answer]];
	}
	
	printf("%s%17s\n","Rating","Frequency");
	
	for(rating=1; rating<FREQUENCY_SIZE; rating++){
		printf("%6d%17d\n",rating,frequency[rating]);
	}
	
	printf("\n------------------------------\n");
	
	int m[10]={19,3,15,7,11,9,13,5,17,2};
	int k;
	int l;
	
	printf("%s%13s%17s\n","Elements","Values","Histogram");
	
	for(k=0; k<10; k++){
		printf("%7d%13d      ",k,m[k]);
		
		for(l=1; l<=m[k]; l++){
			printf("%c",'*');
		}
		printf("\n");
	}
	
	printf("\n------------------------------\n");
    
	int face;
	int roll;
	int freq[7]={0};
	
	srand(time(NULL));  // seed random-number generator//
	
	for(roll=1; roll<=6000; roll++){
		face=1+rand()%6;
		++freq[face];
	}	
	
	printf("%s%17s\n","Face","Frequency");
	
	for(face=1; face<7; face++){
		printf("%4d%17d\n",face,freq[face]);
	}
	
	

	printf("\n------------------------------\n");
		
	int benimDizim [2][2][3]={{{3,4,5},{21,12,34}},{{4,5,6},{7,8,9}}};
	
	int boyut,sutun,satir;	
	
	for(satir=0; satir<2; satir++){
		
		for(sutun=0; sutun<2; sutun++){
			
			for(boyut=0; boyut<3; boyut++){
				printf("%d ",benimDizim[satir][sutun][boyut]);
			}
			
			printf("\n");	
		}
		
		printf("\n______________________\n");
	}
	
	
	printf("\n------------------------------\n");
	
	
	printf("First call to each function:\n");
	
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n\n Second call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	
	printf("\n------------------------------\n");
	
	
	return 0;
}
