#include<stdio.h>

//summation of row elements of a matrix
int main(){

    int matrix[10][10], row, col, num_of_rows, num_of_cols, sum=0;

    printf("How many rows? ");
    scanf("%d",&num_of_rows);
    printf("How many columns? ");
    scanf("%d",&num_of_cols);

    printf("\n");
    //taking input from user
    for(row=0;row<num_of_rows;row++){
        for(col=0;col<num_of_cols;col++){
            printf("Matrix[%d][%d]= ",row+1,col+1);
            scanf("%d",&matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nThe matrix and sum of row elements= \n");
    for(row=0;row<num_of_rows;row++){
        for(col=0;col<num_of_cols;col++){
            printf("%d\t",matrix[row][col]);
            sum = sum + matrix[row][col]; // adding row elements
        }
        printf("= %d", sum); //summation of row elements
        printf("\n");
        sum = 0;
    }

    return 0;
}
