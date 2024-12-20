#include<stdio.h>

int add(int a,int b){
    return a+b;
}
int subs(int a, int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}

int main(){

    int num1, num2;

    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);

    printf("\nSummation = %d",add(num1,num2));
    printf("\nDifference = %d",subs(num1,num2));

    return 0;
}
