// Factorial of a number using function
#include <stdio.h>

int factorial(int num);
int main()
{ 
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printf("The Factorial of %d is: %d \n",num,factorial(num));
    return 0;
}
int factorial(int num){
    int factorial = 1;

    for(int i = 1 ; i <= num ;i = i + 1){
        factorial = factorial * i ;
    }
    return factorial;
}