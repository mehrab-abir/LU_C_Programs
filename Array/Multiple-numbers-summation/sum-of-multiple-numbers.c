#include<stdio.h>

//sum of multiple numbers
int main(){
    int n,arr[20],i,sum=0;

    printf("How many numbers you want to input(max: 20): ");
    scanf("%d",&n);

    printf("\n");

    for(i=0;i<n;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum = sum + arr[i];
    }
    printf("\n");

    /*for(i=0;i<n;i++){
        printf("+%d",arr[i]);

    }*/
    printf("Summation of all given numbers = %d\n\n",sum);
    return 0;
}
