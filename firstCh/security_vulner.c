#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Hello, World!");// Not recommended because it might cause security vulnerability
    // instead use
    printf("%s\n", "Hello, World!");
    //or
    puts("Hello, World!");
    /*because if we supposed that "Hello, world!" is an input from user,
     we don't guarantee that it's formated string, it might be malicious code.
     Review Secure coding in c and c++ book*/ 
}