#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes
", sizeof(intType));
    printf("Size of float: %zu bytes
", sizeof(floatType));
    printf("Size of double: %zu bytes
", sizeof(doubleType));
    printf("Size of char: %zu byte
", sizeof(charType));
    
    return 0;
}

