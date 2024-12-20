#include<stdio.h>
#include<string.h>

int main(){

    char aString[30];

    printf("Write something: ");
    gets(aString);

    strrev(aString);

    printf("\nReversed = %s",aString);

    return 0;
}
