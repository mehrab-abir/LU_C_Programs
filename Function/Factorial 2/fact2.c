#include<stdio.h>

int fact(){
    int result,n;
    printf("\nEnter a number: ");
    scanf("%d",&n);

    if(n==1){
        return 1;
    }
    else{
        return result = n* fact(n-1);
    }
    printf("Factorial = %d",result);
}

int main(){

    fact();

    return 0;
}
