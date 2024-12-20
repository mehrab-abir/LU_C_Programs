#include<stdio.h>

//copy an array to another array
int main(){

    int arr1[30], arr2[30],i,n;

    printf("How many numbers you want to input: ");
    scanf("%d",&n);

    //taking input for array 1
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    //printing array 1
    printf("\nArray 1: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    }

    //Copying array 1 to array 2
    for(i=0;i<n;i++){
        arr2[i] = arr1[i];
    }

    //printing array 2
    printf("\nArray 2: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr2[i]);
    }

    //array 1 again
    printf("\nArray 1: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr1[i]);
    }

    return 0;
}
