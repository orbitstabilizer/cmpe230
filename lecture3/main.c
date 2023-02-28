#include <stdio.h> // preprocesser statement


int func(int a);
int N = 3; 
int g; // global variable / variable definition?



int main(int argc, char *argv[]){ // command line arguments
   
    int x = N; // lacal variable
    int i; // variable declaration

    x = func(6);

    return 0;
}


