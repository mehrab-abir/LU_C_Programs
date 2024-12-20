#include<stdio.h>

int min(int x[],int size){

    int minNum = x[0];

    for(int i=1;i<size;i++){
       if(minNum > x[i]){
            minNum = x[i];
       }
    }
    printf("\nMinimum value: %d",minNum);
}

int main(){
    int arr1[20], n;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    min(arr1,n);

    return 0;
}
