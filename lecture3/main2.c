#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define epsilon 0.0001

int main(){

    double i= 1.0;

    while ( fabs(i) > epsilon ){// 
        i = i -0.1;
        printf("%f\n", i);
    }
    return 0;
}
