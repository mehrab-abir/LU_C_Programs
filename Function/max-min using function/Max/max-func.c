#include<stdio.h>

int max(int x[],int size){

    int maxNum = x[0];

    for(int i=1;i<size;i++){
       if(maxNum < x[i]){
            maxNum = x[i];
       }
    }
    printf("\nMaximum value: %d",maxNum);
}

int main(){
    int arr1[20], n;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    max(arr1,n);

    return 0;
}
