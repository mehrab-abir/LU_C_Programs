#include<stdio.h>
#include<string.h>

int main(){

    char str[30], ch;
    int capitalLetter=0, smallLetter=0, digits=0, others=0, i=0;

    printf("Type something: ");
    gets(str);

    while((ch=str[i]) != '\0'){
        if(ch >= 'A' && ch <= 'Z'){
            capitalLetter++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            smallLetter++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else{
            others++;
        }
        i++;
    }

    printf("\nNumber of capital letters: %d\nNumber of small letters: %d",capitalLetter,smallLetter);
    printf("\nNumber of digits: %d",digits);
    printf("\nNumber of other characters including space: %d",others);

    return 0;
}
