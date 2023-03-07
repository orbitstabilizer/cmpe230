#include <stdlib.h>
#include <stdio.h>

int int_sorter( const void *arg1 , const void *arg2){
  int first = *(int*) arg1;
  int second = *(int*) arg2;

  if (first < second)
    return -1;
  else if (first == second)
    return 0;
  else
    return 1;
}

int main (int argc, char *argv[]){
  int array[10];

  for (int i = 0 ; i< 10 ; i++)
    array[i] = 10 - i ;

  qsort(array, 10, sizeof(int), int_sorter);
  
  for (int i = 0 ; i<10 ; i++) 
    printf("%d\n", array[i]);

  return 0;
}
