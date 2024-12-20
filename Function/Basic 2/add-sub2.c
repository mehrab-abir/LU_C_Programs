#include<stdio.h>

void add(int a, int b, int c){

    printf("\nSummation = %d",a+b+c);
}
void sub(int a, int b){
    if(a>b){
        printf("\nDifference = %d",a-b);
    }
    else{
        printf("\nDifference = %d",b-a);
    }
}

int main(){

    add(10,20,5);

    sub(80,70);

    add(1,5,9);

    printf("\nThe function is working");

    sub(10,4);

    printf("\nSome other codes");

    add(50,60,20);

    return 0;
}
