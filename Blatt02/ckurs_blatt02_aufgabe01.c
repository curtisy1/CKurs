#include <stdio.h>
#include <stdlib.h>

int main() {
    int nummer = 105; // Probiere verschiedene Werte aus: 101, 103, ...
	int i;
	int istPrim = 1; // assume that number is prime
    printf("Ist %d eine Primzahl?\n", nummer);
    for(i = 2; i < nummer; i++){ // iterating over all numbers smaller nummer
    	if(nummer % i == 0){
    		printf("Nein.\n");
    		istPrim = 0; // change so condition below works
    		break; // if division has no rest, it's not prime
    	}
    }
    if(istPrim == 1){ //remains unchanged if all divisions are without rest
    	printf("Ja.\n");
   	}
    return 0;
}
