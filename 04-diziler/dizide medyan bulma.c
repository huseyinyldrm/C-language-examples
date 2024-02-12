#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Medyan, veri kümesi kucukten buyuge siralandiginda ortadaki degerdir. Mod veri kümesinde en fazla görülen sayidir. */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	int cevap [23] =  { 6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8};
     printf( "\n%s\n%s\n%s\n%s","********", " medyan ", "********","Siralanmamis Dizi " );
     int j;
     for ( j = 0; j <= 22; j++ ) { 
          if ( j % 20 == 0 ) 
          printf( "\n" ); 
          printf( "%2d", cevap[ j ] );
     }
     
    int tur, k, tut;
    for ( tur = 1; tur <= 22; tur++ ){
	
        for ( k = 0; k <= 21; k++ ) {
		
            if ( cevap[ k ] > cevap[ k + 1 ] ) { 
                tut = cevap[ k ];
                cevap[ k ] = cevap[ k + 1 ];
                cevap[ k + 1 ] = tut;
		    }
	    }	    
}
     printf( "\n\nSiralanmis dizi " );
     int i;
     for ( i = 0; i <= 22; i++ ) { 
          if ( i % 20 == 0 ) 
          printf( "\n" ); 
          printf( "%2d", cevap[ i ] );
     }
      printf( "\n\n Siralanmis %d elemanlik dizide\n medyan %d.elemandir\n Bu calistirilmada medyan %d\n\n", 23, 23/ 2, cevap[ 23 / 2 ] ); 

	return 0;
}
