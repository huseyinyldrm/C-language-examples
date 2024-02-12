#include <stdio.h>
#include <stdlib.h>
// DÝKKKATTTT= Bu  ornekte satir , sutun , indis yerlerine dikkat et . sirasiyla yaz yoksa kodu dogru okuyamaz!!!!! //
int main(int argc, char *argv[]) {
		
	int benim_matrisim[2][3][4]={{{3,4,5,2},{0,5,3,2},{21,22,12,11}},
	
	                            {{13,14,15,16},{6,7,8,9},{4,3,5,2}}};
	                            
	int satir,sutun,indis;
	
	for(indis=0; indis<2; indis++){
		for(satir=0; satir<3; satir++){
			for(sutun=0; sutun<4; sutun++){
				printf("%d ",benim_matrisim[indis][satir][sutun]);
			}
			printf("\n");
		}
		printf("\n............\n");
	}

	return 0;
}
