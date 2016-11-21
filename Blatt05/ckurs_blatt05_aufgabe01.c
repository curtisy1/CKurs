#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int len) {
    int i;
    printf("Array: ");
    for (i = 0; i < len; i++){
      if(i != len - 1){
      printf("%d, ", array[i]);
      }else{
      printf("%d", array[i]);
      }
    }
}

int min(int array[], int len){
  int i;
  int j = array[0];
  for(i = 0; i < len; i++){
    if(j > array[i]){
      j = array[i];
    }
  }
  return j;
}

int max(int array[], int len){
  int i;
  int j = array[0];
  for(i = 0; i < len; i++){
    if(j < array[i]){
      j = array[i];
    }
  }
  return j;
}

void sum(int array[], int len, int *p){
  int i;
  int j = 0;
  for(i = 0; i < len; i++){
    j += array[i];
  }
  *p = j;
}

int main(void) {
    int array[] = {9,4,7,8,10,5,1,6,3,2};
    int len = 10;
    int p = 0;
    print_array(array, len);
    printf("\n");
    printf("Minimum: %d", min(array, len));
    printf("\n");
    printf("Maximum: %d", max(array, len));
    printf("\n");
    sum(array, len, &p);
    printf("Summe: %d", p);
    return 0;
}
