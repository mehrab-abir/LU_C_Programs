#include<stdio.h>
#include<string.h>

int main(){

    char name[50];

    printf("Enter a string: ");
    gets(name);

    int i=0,len=0;

    while(name[i] != '\0'){
        i++;
        len++;
    }
    printf("String length: %d",len);

    return 0;
}
