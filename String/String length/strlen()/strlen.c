#include<stdio.h>
#include<string.h>

int main(){

    char name[50];

    int i=0,len=0; //while not using strlen()

    printf("Enter a string: ");
    gets(name);

    int length = strlen(name);

    printf("\nThe word length of %s is(with space): %d",name,length);

    return 0;
}
