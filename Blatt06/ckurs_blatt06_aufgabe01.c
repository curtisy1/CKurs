#include <stdio.h>
#include <stdlib.h>
#include "input2.h"

int main() {
    int n = lese_int();
    int laenge = n-1;
    int prim[n];
    prim[0] = 0;
    prim[1] = 0;
    int i, j, k;
    int zaehler;
    int *buffer;

    for(j = 2; j <= n; j++){
      prim[j] = 1; //funktioniert perfekt, alles auf 1
    }
    buffer = malloc(n * sizeof(int));
    if(n >= 3){
    for(i = 2; i <= n; i++){
      //printf("zahl: %d, wert: %d\n", i, prim[i]);
      if(prim[i] == 1){
        prim[i - 2] = 1;
        prim[i] = 0;
        for(zaehler = 2; zaehler <= n ; zaehler++){
          if(i * zaehler > n){
            break;
          }else{
            //printf("wert: %d, zahl: %d, i: %d\n", i*zaehler, zaehler, i);
            prim[i * zaehler] = 0;
          }
              }
              if(i == laenge){
                printf("test");
                for(k = 0; k < i; k++){
                  if(i % k == 0){
                    prim[i - 2] = 0;
                  }else{
                    prim[i - 2] = 1;
            }
          }
        }
      }
  }
}else{
  prim[0] = 1;
  prim[1] = 0;
  prim[2] = 0;
}
  for(i = 0; i <= laenge; i++){
    //printf("i: %d, zahl: %d\n", i, prim[i]);
  }

    // Mit print_prim Primzahlen ausgeben
    print_prim(prim, laenge);
    free(buffer);

    return 0;
}
