
#include <stdio.h>


int main() {
    int A[6];

    int y = 10;
    int x = 5;

    char *s1,*s2 ;
    int *p, *q; // not same as int* p, q;

    p = A;
    q = A + 2;


    s1 = (char*)p; // typecast to char* to get the address of the first byte of the int
    s2 = (char*)q; 

    printf("%p\n", p);
    printf("%p\n", q);
    printf("%p\n", s1);
    printf("%ld\n", q - p);
    printf("%ld\n", s2 - s1);
    printf("%c\n", *s1);





    return 0;
}
