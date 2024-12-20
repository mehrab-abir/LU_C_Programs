#include<stdio.h>

int main(){

    int matrix[10][10], row,col, numOfRows, numOfCols,sum=0;

    printf("How many rows: ");
    scanf("%d",&numOfRows);

    numOfCols = numOfRows;

    printf("\n");

    //input
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("Matrix[%d][%d]: ",row+1,col+1);
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    //display matrix
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("%d\t",matrix[row][col]);
        }
        printf("\n");
    }

    //adding diagonal elements
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            if(row==col){
                sum = sum + matrix[row][col];
            }
        }
    }

    printf("\nSummation of diagonal elements of the matrix= %d",sum);


    return 0;
}
