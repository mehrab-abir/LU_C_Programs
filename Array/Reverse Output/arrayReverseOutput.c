#include<stdio.h>

//reverse an array
int main(){

    int numbers[10], i,n;

    printf("\nHow many numbers you want to input: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("\nOriginal array: ");
    for(i=0;i<n;i++){
        printf("%d\t",numbers[i]);
    }

    printf("\nReversed array: ");
    for(i=n;i>=1;i--){
        printf("%d\t",numbers[i-1]);
    }

    return 0;
}
