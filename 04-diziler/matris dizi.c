#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int benimMatrisim [2][3][4]={{{1 ,2 ,3 ,4},{9, 5, 6, 4},{10, 12, 33, 44}},
	
								{{99, 88, 77, 66},{6, 77, 55, 44},{21, 12, 21, 40}}};
	
	int bir,iki,uc;
	for(bir=0;bir<2;bir++){
		
		for(iki=0;iki<3;iki++){
			
			for(uc=0;uc<4;uc++){
				
				printf("%d",benimMatrisim[bir][iki][uc]);
			}
			printf("\n");
		}
		printf(".......................\n");
	}
	return 0;
}
