// Find min and max in array

#include <stdio.h>

int main(){
    int SIZE = 10;
    int marks[10] = {73,42,41,50,60,93,102,147,58,3};
    //               0  1  2  3  4  5   6   7  8  9 
    int max = 0;
    int min = marks[0];

    for(int i = 0;i<SIZE;i++){
        if(marks[i]>max){
            max = marks[i];
        }
        if(marks[i]<min){
            min = marks[i];
        }
    }
    printf("MIN = %d\n",min);
    printf("MAX = %d\n",max);
    

}
