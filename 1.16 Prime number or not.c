// Check for number is prime or not
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int factorCount = 0;

    for(int i = 1;i<=num;i = i + 1 ){
        if(num%i==0){
            factorCount = factorCount + 1;
        }
    }
    if(factorCount==2){
        printf("%d number is prime",num);
    }
    else{
        printf("%d number is not prime",num);
    }

    return 0;
}