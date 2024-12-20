#include<stdio.h>
#include<string.h>

//copy string
int main(){

    char source[] = "Programming is fun";
    char target[30];

    strcpy(target,source);

    printf("Original string: %s",source);
    printf("\nCopied string: %s",target);

    return 0;
}
