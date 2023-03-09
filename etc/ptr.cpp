#include <stdlib.h>
#include <stdio.h>


/* function to generate and return random numbers */
int * getRandom( ) {

   static int  r[10];
   int i;

   /* set the seed */
  
   for ( i = 0; i < 10; ++i) {
      r[i] = i;
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

/* main function to call above defined function */
int main () {
  int *arroften;

  arroften =(int*) malloc(10 * sizeof(int));
  for ( int i = 0; i < 10; i++ ) {
     printf( "*(p + %d) : %d\n", i, *(arroften + i));
  }

  free(arroften);
  arroften = NULL;



  return 0;
}
