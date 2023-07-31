// List the prime numbers in a range

#include <stdio.h>

int checkPrime(int num);

int main(){

    int start = 1;
    int end = 1000;

    for(int num=start;num<=end;num = num + 1){
        if(checkPrime(num)){
            printf("%d,",num); // Print when the num is prime
        }
    }
    return 0;
}

int checkPrime(int num){
    int factorCount = 0;
    for(int i=1;i<=num;i = i+1){
        if(num%i==0){
            factorCount = factorCount + 1;
        }
        if(factorCount>2){
            break;
        }
    }
    if(factorCount==2){
        return 1;
    }else{
        return 0;
    }
}
