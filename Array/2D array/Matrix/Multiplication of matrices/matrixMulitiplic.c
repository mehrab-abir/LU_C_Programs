#include<stdio.h>

int main(){

    int matA[10][10], matB[10][10], matProduct[10][10], row, col, nr1, nc1, nr2, nc2;

    printf("How many rows for 1st matrix: ");
    scanf("%d",&nr1);

    printf("How many columns for 1st matrix: ");
    scanf("%d",&nc1);

    printf("How many rows for 2nd matrix: ");
    scanf("%d",&nr2);

    printf("How many columns for 2nd matrix: ");
    scanf("%d",&nc2);

    while(nc1 != nr2){
        printf("The number of columns of first matrix and the number of rows of second matrix must be equal to perform matrix multiplication.\n");

        printf("How many rows for 1st matrix: ");
        scanf("%d",&nr1);

        printf("How many columns for 1st matrix: ");
        scanf("%d",&nc1);

        printf("How many rows for 2nd matrix: ");
        scanf("%d",&nr2);

        printf("How many columns for 2nd matrix: ");
        scanf("%d",&nc2);
    }

    printf("\nInput for Matrix A:\n");
    //taking input for first matrix
    for(row=0;row<nr1;row++){
        for(col=0;col<nc1;col++){
            printf("Matrix A[%d][%d]: ",row+1,col+1);
            scanf("%d",&matA[row][col]);
        }
        printf("\n");
    }

    printf("\nInput for Matrix B:\n");
    //taking input for second matrix
    for(row=0;row<nr2;row++){
        for(col=0;col<nc2;col++){
            printf("Matrix B[%d][%d]: ",row+1,col+1);
            scanf("%d",&matB[row][col]);
        }
        printf("\n");
    }

    //printing first matrix(A)
    printf("\nMatrix A:\n");
    for(row=0;row<nr1;row++){
        for(col=0;col<nc1;col++){
            printf("%d  ",matA[row][col]);
        }
        printf("\n");
    }

    //printing second matrix(B)
    printf("\nMatrix B:\n");
    for(row=0;row<nr2;row++){
        for(col=0;col<nc2;col++){
            printf("%d  ",matB[row][col]);
        }
        printf("\n");
    }

    return 0;
}
