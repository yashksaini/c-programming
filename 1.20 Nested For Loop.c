// Nested For Loop (Tables Program)

#include <stdio.h>

int main() {
    int start,end;
    printf("Enter a start number: ");
    scanf("%d",&start);
    printf("Enter a end number: ");
    scanf("%d",&end);

    for(int i = 1;i<=10;i = i + 1){
        // To print a line horizontally
        for(int j=start;j<=end;j=j+1){
            printf("%3d  ",i*j);
        }
        printf("\n");
    }
    return 0;
}