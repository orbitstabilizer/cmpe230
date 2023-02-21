#include <stdio.h>

int func();//function prototype

int main(int argc, char** argv) {
    for(int i = 0 ; i< argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
    
}
