#include<stdio.h>

void swap(int *a, int *b){

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int first, second, temp;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    swap(&first,&second);

    printf("\nAfter swapping, first number = %d\n", first);
    printf("After swapping, second number = %d", second);
    return 0;
}
