#include<stdio.h>

int sort_numbers_ascending(int n){
    int i,j,temp, numbers[50];

    for(i=0;i<n;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&numbers[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(numbers[j]>numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    printf("\nSorted numbers: \n");

    for(i=0;i<n;i++){
        printf("%d\n",numbers[i]);
    }

}

int main(){

    int n;

    printf("How many numbers to sort: ");
    scanf("%d", &n);

    sort_numbers_ascending(n);

    return 0;
}
