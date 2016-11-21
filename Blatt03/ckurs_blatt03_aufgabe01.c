#include <stdio.h>
#include <stdlib.h>

int box(int breite, int hoehe){
    int i, j, k;
    for(i = 0; i <= hoehe; i++){
        for(j = 0; j < breite; j++){
            if(i == 0){
                printf("A");
                if(j == breite - 1){
                    printf("AA\n");
                }
            }else if(i != 0 && j == 0){
              if(breite == 1){
                printf("ABA");
              }else{
                printf("AB");
              }
            }else if(i != 0 && j == breite - 1){
                printf("BA");
            }else if((i != 0 && j != 0) || (i != hoehe && j != breite - 1)){
                printf("B");
            }
            if(i == hoehe && j == breite - 1){
                printf("\n");
                for(k = 0; k < breite + 2; k++){
                    printf("A");
                }
            }
        }
        if(i != 0){
            printf("\n");
        }
    }
    return 0;
}

int main(void) {
	int hoehe = 5;
	int breite = 5;
	box(breite, hoehe);
	return 0;
}
