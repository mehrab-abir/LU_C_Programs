#include<stdio.h>
#include<string.h>
int main(){

    char firstName[20], lastName[20];

    printf("Enter first name: ");
    gets(firstName);

    printf("\nEnter last name: ");
    gets(lastName);

    strcat(strcat(firstName," "),lastName);

    printf("\nFull name: %s",firstName);

    return 0;
}
