// Pattern Program
// Output
// *
// **
// ***
// ****
// *****
// ******

#include <stdio.h>

int main() {
    int star;
    printf("Enter Number of rows : ");
    scanf("%d",&star);
     
    for(int i = 1; i<=star;i=i+1){
        for(int j = 1;j<=i; j = j+1){
            printf("*");
     } 
     printf("\n");
    
    }
    return 0;
}