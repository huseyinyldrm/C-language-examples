#include <stdio.h>
#include <stdlib.h>

struct card{
	char *face;
	char *suit;
};
int main(int argc, char *argv[]) {
	struct card aCard;
	struct card *CardPtr;
	aCard.face="Ace";
	aCard.suit="Spades";
	
	CardPtr=&aCard;
	
	printf("%s%s%s\n%s%s%s\n%s%s%s\n",
	aCard.face," of ",aCard.suit, // yapi degiskeni adi araciligiyla yapi üyesine erişir.
	CardPtr->face," of ",CardPtr->suit, // yapiya bir isaretci araciligiyla bir yapi elemanina erisir.
	(*CardPtr).face," of ",(*CardPtr).suit);
	
	
	return 0;
}
