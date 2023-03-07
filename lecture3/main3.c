#include<stdio.h>



int main(){
    int a = 10;
    int *p = &a;// &a is r-value
    // *p = 20; // *p is l-value
    printf("%d", *p);
    return 0;
}
