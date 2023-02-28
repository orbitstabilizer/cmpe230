#include <stdio.h> // preprocesser statement


int func(int a);
int N = 3; 
int g; // global variable / variable definition

char c; // character uses 8 bits

int main(int argc, char *argv[]){ // command line arguments
   
    int x = N; // lacal variable
    int i; // variable declaration

    x = func(6);

    x = c; // c is cast to an int
    c = 'A'; // c contains the ASCII value of 'A'  (65) == 1000001
    
    printf("Size of char: %d:%5c:%-5x\n", sizeof(c), c, c);
                        // %c : character
                        // %5c : character with 5 spaces
                        // %-5c : character with 5 spaces on the left
    return 0;
}


