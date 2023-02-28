#include <stdio.h> // preprocesser statement
/*
#define YOUNG 1
#define MIDDLE 2
#define OLD 3
*/
enum age {young, middle, old}; //enums

enum age a = young; //enum variable

int func(int a);
int N = 3; 
int g; // global variable / variable definition
unsigned int ui = 0; // unsigned int


char c; // character uses 8 bits

int main(int argc, char *argv[]){ // command line arguments
   
    int x = N; // lacal variable
    int i; // variable declaration
    float y; // floating point number
    x = func(6);

    x = c; // c is cast to an int
    c = 'A'; // c contains the ASCII value of 'A'  (65) == 1000001
   
    // sizeof(int) works also
    printf("Size of char: %d:%5c:%-5x\n", sizeof(c), c, c);
                        // %c : character
                        // %5c : character with 5 spaces
                        // %-5c : character with 5 spaces on the left
    // format specifiers
    // %d : decimal 
    // %x : hex
    // %o : octail
    return 0;
}


