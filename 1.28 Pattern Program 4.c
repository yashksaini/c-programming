#include <stdio.h>

int main()
{
   int num;
   printf("Enter the number of rows :");
   scanf("%d",&num);
   
   for(int i = 1; i <= num; i = i + 1 ){
       
        for(int k = 1; k <= num - i; k = k + 1){
             printf(" ");
        }
        for(int j = 1; j <= i; j = j + 1 ){
            printf("%d",j);
        }
        for (int f = i - 1; f >= 1; f = f - 1) {
            printf("%d", f);
        }
        printf("\n");
}
    return 0;
}
// Output
// Enter the number of rows :5
//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1