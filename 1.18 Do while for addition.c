// Add muliple numbers from user.
#include <stdio.h>
#include <stdbool.h>

int main() {
    int sum = 0;
    printf("******** Enter 0 to exit *******\n");
    do{
        int num;
        printf("Enter a positive number: ");
        
        scanf("%d",&num);
        if(num==0){
            break;
        }else{
            sum = sum + num;
        }

    }while(true);

    printf("%d is the final sum",sum);
    
    return 0;
}