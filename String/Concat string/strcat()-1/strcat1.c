#include<stdio.h>
#include<string.h>

int main(){

    char firstName[] = "Mehrab Jalil ";
    char lastName[] = "Abir";

    strcat(firstName,lastName);

    printf("Full name: %s",firstName);

    return 0;
}
