
#include <stdio.h>


int main(){
    
    //char s[6] = "Hello";
    char s[] = "Hello"; // same as above
    char *p;
    char *q;

    p = s;
    q = s + 5;
   
    *q = '!'; // this is undefined behavior

    printf("%s\n", s);
    printf("p : %c(%d)\n", *p, *p);
    printf("q : %c(%d)\n", *q, *q);
    printf("s[3:] : %s\n", s+3);
    /*
    for (int i = 0 ; i< 100; i++){
        printf("%d : %c(%d)\n",i , s[i] , s[i]);
    }
    */
    return 0;
}
