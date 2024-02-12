#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 10

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
    
    int array1[]={45,23,21,12};
    int top=array1[0]+array1[1]+array1[2]+array1[3];
    printf("Girilen Elemanlarin Toplami=%d",top);
    
    printf("\n------------------------------------\n");
    
    int n[10];
    int i;
    
    for(i=0; i<10; i++){
    	n[i]=0;
	}
	
	printf("%s%13s\n","Element","Value");
	
	for(i=0; i<10; i++){
		printf("%7d%13d\n",i,n[i]);
	}
    
    printf("\n------------------------------------\n");
    
	int s[SIZE];
	int j;
	
	for(j=0; j<SIZE; j++){
		s[j]=2+2*j;
	}
	printf("%s%13s\n","Element","Value");
	
	for(j=0; j<SIZE; j++){
		printf("%7d%13d\n",j,s[j]);
	}
    
    printf("\n------------------------------------\n");
    
    int a[10]={10,21,2,22,32,33,44,5,3,2};
    int b;
    int c;
    
    printf("%s%13s%17s\n","Element","Value","Histogram");
    
    for(b=0; b<10; b++){
    	printf("%7d%13d        ",b,a[b]);
    	
    	for(c=1; c<=a[b]; c++){
    		printf("%c",'*');
		}
		printf("\n");
	}
	
    printf("\n------------------------------------\n");
  
    
    char array2[5];
    
    printf("     array = %p\n &array2[0]= %p\n   &array2=%p\n",array2,&array2[0],&array2);
    
    
    printf("\n------------------------------------\n");
    
    int k[10]={2,3,4,64,6,12,21,44,33,50};
    int pass;
    int m;
    int hold;
    
    printf("Data items in original order\n");
    
    for(m=0; m<10; m++){
    	printf("%4d",k[m]);
	}
	
	for(pass=1; pass<10; pass++){
	
	// en onemli kisim burasidir.Burada dizinin en buyuk elemani belirlenir.
    	for(m=0; m<10-1; m++){
	    	if(k[m]>k[m+1]){
		    	hold=k[m];
			    k[m]=k[m+1];
			    k[m+1]=hold;
	    	}
	   }
    }
    
    printf("\nData items in ascending order\n");
    
    for(m=0; m<10; m++){
    	printf("%4d",k[m]);
	}
	printf("\n");
	
	
	printf("\n------------------------------------\n");
    
	return 0;
}
