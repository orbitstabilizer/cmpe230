#include <string.h>
#include <stdio.h>


int main(){
    /*
    char s[10];
    
    scanf("%s", s);

    printf("%s\n", s);
    */ 
    char s1[] = "hell";
    char s2[] = "xxxxxxxxxxxxxxxx";

    strncpy(s1, s2, sizeof(s1) - 1);

    printf("%s\n", s1);

    return 0;
    

}
