// Program to find the sum of two numbers

#include <stdio.h>

void checkPrime(int num);

int main(){

    do{
        int num;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==0){
            break;
        }else{
            checkPrime(num);
        }
    }while(1);
    

    return 0;
}

void checkPrime(int num ){

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
}



