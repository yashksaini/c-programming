// Understanding while loopm with prime check
#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int factorCount = 0;

    int i = 1;
    while(i<=num){
        if(num%i==0){
            factorCount = factorCount + 1;
        }
        i = i + 1;
        if(factorCount>2){
            break;
        }
    }
    if(factorCount==2){
        printf("%d number is prime",num);
    }else{
        printf("%d number is not prime",num);
    }
    
    return 0;
}