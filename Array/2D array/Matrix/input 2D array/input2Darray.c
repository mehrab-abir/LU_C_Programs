#include<stdio.h>

//2D array - making a matrix by taking input from user
int main(){

    int matrix[10][10], row, col, num_of_rows, num_of_cols;

    printf("How many rows do you want? ");
    scanf("%d",&num_of_rows);
    printf("How many columns do you want? ");
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

    //printing the matrix
    printf("\nThe Matrix= \n");
    for(row=0;row<num_of_rows;row++){
        for(col=0;col<num_of_cols;col++){
            printf("%d\t",matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}
