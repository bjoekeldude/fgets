#include <stdio.h>
#include <stdlib.h>

#define INPUTBUFFSIZE 32

int main (){
	char Input_Buff[INPUTBUFFSIZE];

	printf("Bitte Text eingeben: ");

	if(fgets(Input_Buff, INPUTBUFFSIZE, stdin) ==
	NULL){
		printf("Fehlerhafter Input.");
		abort();
	}
	else printf("Eingabe: %s.", Input_Buff);
	//Warum steht der Punkt in der nächsten Zeile?
	return 0;
}
