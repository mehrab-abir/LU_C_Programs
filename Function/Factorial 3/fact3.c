#include<stdio.h>

int fact(int n){

    if(n==0 || n==1){
        return 1;
    }
    else{
        return n* fact(n-1);
    }
}

int main(){

    int n;

    printf("\nEnter the number: ");
    scanf("%d",&n);

    printf("Factorial = %d",fact(n));

    return 0;
}
