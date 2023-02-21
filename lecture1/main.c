#include <stdio.h> // preprocessor statement

#ifdef INTEL   // conditional compilation
#define N 32
#else 
#define N 64
#endif


int func();//function prototype in c , 
           //function signature in java

#ifdef INTEL
int main(int argc, char** argv) {
    int x = N ;
    /*for(int i = 0 ; i< argc; i++){
        printf("%s\n", argv[i]);
    }*/
    printf("INTEL\n");
    printf("%d\n" , x);
    return 0;
    
}
#else
int main(int argc, char** argv) {
    int x = N ;
    /*for(int i = 0 ; i< argc; i++){
        printf("%s\n", argv[i]);
    }*/
    printf("%d\n" , x);
    return 0;
    
}
#endif

/*
* gcc: prepocessor > compiler > linker 
*/

// gcc -c file.c : compile without linking
// gcc file.c : do all pre-com-link, default behavior  
//      output : a.out in unix , a.exe in win
// gcc -DINTEL : define INTEL flag 

