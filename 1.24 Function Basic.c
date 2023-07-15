// Basic function program

#include <stdio.h>
// Function prototype
void printHello();
void printHello1();
// main is entry point of program
int main(){

    printHello();
    return 0;
}

void printHello(){
    printf("Hello from function\n");
    printHello1();
}

void printHello1(){
    printf("Hello from function 2\n");
}