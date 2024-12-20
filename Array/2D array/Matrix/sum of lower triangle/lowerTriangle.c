#include<stdio.h>

int main(){

    int matrix[10][10], row,col, numOfRows, numOfCols,sum=0;

    printf("How many rows: ");
    scanf("%d",&numOfRows);

    printf("How many columns: ");
    scanf("%d", &numOfCols);

    printf("\n");

    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("Matrix[%d][%d]: ",row+1,col+1);
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    //printing the matrix
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("%d  ",matrix[row][col]);
        }
        printf("\n");
    }

    //adding lower triangle elements
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            if(row > col){
                sum = sum + matrix[row][col];
            }
        }
    }

    printf("\nSummation of diagonal elements of the matrix= %d",sum);


    return 0;
}
