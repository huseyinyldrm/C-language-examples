#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
		
	// define N 5 kutuphaneye eklenir. ornegin 5 elemanli iki adet tamsayi dizisinin bir takim elemanlarina deger atanmasi//
	
	int benimMatrisim[2][3]={{1,2,3},{9,8,7}};
	int satir_indisi,sutun_indisi;
	
	for(satir_indisi=0; satir_indisi<2; satir_indisi++){
		for(sutun_indisi=0; sutun_indisi<3; sutun_indisi++){
			printf("%d ",benimMatrisim[satir_indisi][sutun_indisi]);
		}
		printf("\n");
	}

	return 0;
}
