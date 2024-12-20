#include<stdio.h>

//1D array basic
int main(){

    int anArr[] = {10,20,60,50,90};

    printf("%d\n",anArr[2]); //printing an array element

    for(int i=0;i<4;i++){
        printf("%d ",anArr[i]); // printing all array element
    }

    //taking input from user
    int n, arr2[50];
    printf("\nHow many numbers: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr2[i]);
    }

    printf("\nThis array:\t");
    for(int i=0;i<n;i++){
        printf("%d\t",arr2[i]);
    }

    return 0;
}
