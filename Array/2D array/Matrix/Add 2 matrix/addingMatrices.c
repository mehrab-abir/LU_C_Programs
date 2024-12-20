#include<stdio.h>

//adding two matrices - input will be given by user
int main(){

    int matA[10][10], matB[10][10], A_plus_B[10][10], numOfRows, numOfCols, row, col;

    printf("Enter the number of rows: ");
    scanf("%d",&numOfRows);

    printf("\nEnter the number of columns: ");
    scanf("%d",&numOfCols);

    //taking input for matrix A
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("Matrix A[%d][%d]= ",row+1,col+1);
            scanf("%d",&matA[row][col]);
        }
        printf("\n");
    }

    //printing Matrix A
    printf("\nMatrix A= \n");
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("%d\t",matA[row][col]);
        }
        printf("\n");
    }

    //taking input for matrix B
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("Matrix B[%d][%d]= ",row+1,col+1);
            scanf("%d",&matB[row][col]);
        }
        printf("\n");
    }

    //printing Matrix B
    printf("\nMatrix B= \n");
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("%d\t",matB[row][col]);
        }
        printf("\n");
    }

    //adding two matrices A and B

    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
           A_plus_B[row][col] = matA[row][col] + matB[row][col];
        }
    }

    //printing the final output
    printf("\nA + B= \n");
    for(row=0;row<numOfRows;row++){
        for(col=0;col<numOfCols;col++){
            printf("%d\t",A_plus_B[row][col]);
        }
        printf("\n");
    }

    return 0;
}
