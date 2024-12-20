#include<stdio.h>

//2D array basic
int main(){

    int matrix[3][4] = {{12,4,6,23}, {5,18,6,1}, {0,8,59,7}},row,col;

    for(row=0;row<3;row++){
        for(col=0;col<4;col++){
            printf("%d\t",matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
