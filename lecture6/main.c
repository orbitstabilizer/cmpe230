#include <stdlib.h>
#include <stdio.h>

int* f1(){
    return NULL;
}

int f2(){
    printf("Hello buddy\n");
    return 6;
}

int f3(){
    printf("good night\n");
    return 6;
}

int main(int argc, char *argv[]){
    /* 
    int x;
    int *p;
    int (*pf)(); // pointer to a function returning an int

    p = &x;
    p = f1();

    pf = f3; // no need to &, but you can

    x = f2();
    x = (*pf)(); // no need to *, but you can
    
    printf("%d\n", x);
    */
    int (**pfa)();
    pfa = malloc(2 * sizeof(int (*)()));

    pfa[0] = f2;
    pfa[1] = f3;

    for (int i = 0; i < 2; i++){
        pfa[i]();
    }
    return 0;
}
