#include<stdio.h>

int main(){
    int numOfNumbers, i,j,temp;

    printf("How many numbers you want to sort: ");
    scanf("%d",&numOfNumbers);

    int numsArr[numOfNumbers];

    for(i=0;i<numOfNumbers;i++){
        printf("Enter number %d: ",i+1);
        scanf("%d",&numsArr[i]);
    }

    for(i=0;i<numOfNumbers-1;i++){
        for(j=0;j<numOfNumbers-1-i;j++){
            if(numsArr[j]>numsArr[j+1]){
                temp = numsArr[j];
                numsArr[j] = numsArr[j+1];
                numsArr[j+1] = temp;
            }
        }
    }
    printf("\nSorted numbers: \n");

    for(i=0;i<numOfNumbers;i++){
        printf("%d\n",numsArr[i]);
    }

    return 0;
}
