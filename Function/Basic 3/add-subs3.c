#include<stdio.h>

int math(){
    int a,b,sum;
    printf("\nEnter a number: ");
    scanf("%d",&a);

    printf("\nEnter another number: ");
    scanf("%d",&b);

    sum = a+b;

    printf("\nSum = %d",sum);

    //subtraction
    if(a>b){
        printf("\nDifference = %d",a-b);
    }
    else{
        printf("\nDifference = %d",b-a);
    }
    //multiplication
    printf("\nProduct = %d",a*b);
}

int main(){

    printf("Some code");
    math();

    return 0;
}
