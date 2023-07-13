// Input a number 
// 12 : 1,2,3,4,6,12

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factors of %d are : ",num);
    
    int i = 2;
    printf("1");
    while(i<=num){
       if(num%i==0){
            printf(",%d",i);
       }
       i = i + 1;
    }

    return 0;
}