#include<stdio.h>

//string basic
int main(){

    char name[30];

    printf("Enter your name: ");
    gets(name); //gets(string name) is used to take string as input,, scanf can not work after a space

    printf("\n%s",name);

    return 0;
}
