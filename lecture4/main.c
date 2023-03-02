#include <stdio.h>

int main(int argc, char *argv[]) { // in cpp int& is 
    // passed by reference but in c it doesn't work
    int y = 10;
    int x = 5;

    int *p ;  // pointer to int 
    int **pp; // pointer to pointer

    p = &x; // address of x 
    
    y = *p; // value of/ dereference
    
    pp = &p; // address of p
    
    printf("x   = %d\n", x);
    printf("*p  = %d\n", *p);
    printf("**p = %d\n", **pp);
    printf("p = %p\n", p); // %p is for pointers
    printf("sizeof(p) = %lu\n", sizeof(p));

    // gcc -m32 main.c -o main  // 32 bit 
    return 0;
}
