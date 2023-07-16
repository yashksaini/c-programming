// Perimeter and area of triangle
#include <stdio.h>

void rectangle(int l, int b);
void area(int l, int b);
int main()
{
    int l,b;
    printf("Length of rectangle is : ");
    scanf("%d",&l);
    printf("\nBreadth of rectangle is : ");
    scanf("%d",&b);
     
     rectangle(l,b);
     area (l,b);
    return 0;
}
void rectangle(int l, int b){
    printf("\nPerimeter of this rectanlge is : %d", 2*(l + b));
}
void area(int l, int b){
    printf("\nArea of this rectanlge is : %d", l*b );
}