// Program to find the sum of two numbers

#include <stdio.h>

void sum(int a,int b);
void multiply(int a,int b);
void subtract(int a,int b);

int main(){
    int num1,num2;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    sum(num1,num2);
    multiply(num1,num2);
    subtract(num1,num2);

    return 0;
}

void sum(int a ,int b){
    printf("Sum is %d\n",a+b);
}
void multiply(int a ,int b){
    printf("Multiplication is %d\n",a*b);
}
void subtract(int a ,int b){
    printf("Subtraction is %d\n",a-b);
}


