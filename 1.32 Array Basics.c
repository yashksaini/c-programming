// Array Basics

#include <stdio.h>

int main(){
    int marks[5] = {73,42,41,50,60};
    //              0   1  2  3  4
    printf("%d\n\n",marks[2]);

    int heights[3];
    heights[0] = 150;
    heights[1] = 141;
    heights[2] = 147;

    for(int i=0;i<3;i++){
        printf("%d\n",heights[i]);
    }

}
