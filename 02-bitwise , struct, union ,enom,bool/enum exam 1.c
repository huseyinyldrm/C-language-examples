#include <stdio.h>
#include <stdlib.h>
enum months{
	JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC
};

enum days{
	MON=1,TUE,WED,THU,FRI,SAT,SUN
};

int main(int argc, char *argv[]) {
	enum months month;
	const char *monthName[]={" ","January ","February ","Mach ","April ","May ",
	"June ","July ","August ","September ","October ","Novenber ","December "};
	
	for(month=JAN; month<=DEC; month++){
		printf("%2d%15s\n",month,monthName[month]);
	}
	
	printf("\n\n---------------------------------------------------------\n\n");
	
	enum days day;
	const char *dayName[]={" ","Monday","Tuesday",
	"Wednesday","Thursday","Friday","Saturday","Sunday"};
	
	for(day=TUE; day<=SUN; day++){
		printf("%2d%15s\n",day,dayName[day]);
	}
	
	return 0;
}
