#include<stdio.h>

extern int g; // variable decleration .. this var is defined elsewhere

int func(int a){ 

    a = a + g;
    return a*a;
}
