#include <stdio.h>

int main(int argc, char *argv[]) {
    int y = 10;
    int x = 5;

    int *p ;  // pointer to int 
    int **pp; // pointer to pointer

    p = &x; // address of x 
    
    y = *p; // value of/ dereference
    
    pp = &p; // address of p
    
    printf("x = %d\n", x);
    printf("x = %d\n", *p);
    printf("x = %d\n", **pp);
    printf("y = %d\n", y);
    return 0;
}
