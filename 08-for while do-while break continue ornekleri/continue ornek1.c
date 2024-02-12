#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	    
    int intager=0;
    
    for(intager=0; intager<=10; intager++){
    	if(intager==5){
    		continue;  // sadece istenilen adimi atlar sonra donguyu devam ettirir!!!!//
		}
		printf("%d\n",intager);
	}

	return 0;
}
