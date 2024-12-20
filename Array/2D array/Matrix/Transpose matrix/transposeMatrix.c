#include<stdio.h>

int main(){

    int matrix[10][10], transpose[10][10], row,col,numOfRows, numOfCols;

    printf("How many rows: ");
    scanf("%d",&numOfRows);

    printf("How many columns: ");
    scanf("%d",&numOfCols);

    printf("\n");

    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("Matrix[%d][%d]: ",row+1,col+1);
            scanf("%d", &matrix[row][col]);
        }
        printf("\n");
    }

    //printing the matrix
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("%d\t",matrix[row][col]);
        }
        printf("\n");
    }

    //transpose
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            transpose[col][row] = matrix[row][col];
        }
    }

    printf("\nTranspose matrix: \n");
    //printing transpose matrix
    for(row=0;row<numOfCols;row++){
        for(col=0;col<numOfRows;col++){
            printf("%d\t",transpose[row][col]);
        }
        printf("\n");
    }

    return 0;
}
