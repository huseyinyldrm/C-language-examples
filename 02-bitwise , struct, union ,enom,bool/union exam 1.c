#include <stdio.h>
#include <stdlib.h>

union number{
	int x;
	double y;
};
int main(int argc, char *argv[]){
	
	union number value;
	value.x=100;
	printf("%s\n%s\n%s\n%d\n\n%s\n%f\n\n\n","Put a value in the intager member ","and print both members.","int: ",value.x,"double: ",value.y);
	
	value.y=100.0;
	
	printf("%s\n%s\n%s\n%d\n\n%s\n%f\n\n\n","Put a value in the floating member ","and print both members.","int: ",value.x,"double: ",value.y);
	
	
	
	return 0;
}
