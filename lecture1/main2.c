#include <stdio.h>

#define PLUS1SQR(x) ( (x+1)*(x+1))


// function
int plus1_sqr(int x) {
    x++;
    return x*x;
}


int main(int argc, char** argv) {
    printf("%d\n", PLUS1SQR(2));
    
    return 0;
}
