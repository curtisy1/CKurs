#include <stdio.h>
#include <stdlib.h>
#include "input.h" // Hier binden wir die Bibliothek ein
int fib1 = 1;
int fib2 = 1;

int fibonacci(int fib){
  int res = 1; //result of fibonacci
  if(fib == 1 || fib == 2){ // first 2 are 1 so quit
    printf("Fib %d res %d\n", fib, res);
    return 1;
  }else{
    fibonacci(fib - 1); // recursive call decrementing fib
    res = fib1 + fib2; // add first two defaults
    fib2 = fib1; // invert numbers for further calculating
    fib1 = res; // e.g. 1 = 2 -> 2 + 1
    printf("Rek: Fib %d res %d\n", fib, res);
    return res;
  }
}

int main(){
    int n = lese_int(); // Hier rufen wir die Funktion lese_int auf.
    int f = fibonacci(n);
    printf("Fib(%d) = %d\n" , n, f);

    return 0; //Beende das Programm ohne Fehlermeldung
}
