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

    printf("Factorial = %d",fact(8));

    printf("\nSomething else...habijabi");

    printf("\nFactorial = %d",fact(7));


    return 0;
}
