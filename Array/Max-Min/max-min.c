#include<stdio.h>

//find maximum and minimum number from an array

int main(){

    int i,n,nums[20], max, min;

    printf("How many numbers you want to input: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d", &nums[i]);
    }
    for(i=0;i<n;i++){
        printf("%d\t",nums[i]);
    }

    max = nums[0];

    for(i=1;i<n;i++){
        if(max < nums[i]){
            max = nums[i];
        }
    }
    printf("\nMaximum number is: %d", max);

    min = nums[0];

    for(i=1;i<n;i++){
        if(min > nums[i]){
            min = nums[i];
        }
    }
    printf("\nMinimum number is: %d", min);

    return 0;
}
