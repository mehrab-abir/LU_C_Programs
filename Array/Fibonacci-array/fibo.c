#include<stdio.h>

//Fibonacci number using array
int main(){

    int n, fibo[30],i;

    printf("How many Fibonacci numbers you want to get: ");
    scanf("%d", &n);

    fibo[0]= 0;
    fibo[1]= 1;

    for(i=2;i<n;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    printf("\n");

    for(i=0;i<n;i++){
        printf("%d\t",fibo[i]);
    }

    return 0;
}
