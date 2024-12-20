#include<stdio.h>
#include<string.h>

int main(){
    char str[50], ch;
    int i, vowels, consonant, digits, others, words;

    i=0;
    vowels=consonant=digits=words=others=0;

    printf("Type something: ");
    gets(str);

    while((ch=str[i]) != '\0'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowels++;
        }
        else if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z')){
            consonant++;
        }
        else if(ch >= '0' && ch <= '9'){
            digits++;
        }
        else if(ch==' '){
            words++;
        }
        else{
            others++;
        }

        i++;
    }
    words++;

    printf("\nNumber of vowels = %d",vowels);
    printf("\nNumber of consonants = %d",consonant);
    printf("\nNumber of digits = %d",digits);
    printf("\nNumber of words = %d",words);
    printf("\nNumber of other characters = %d",others);


    return 0;
}
