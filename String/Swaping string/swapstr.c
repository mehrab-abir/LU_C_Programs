#include<stdio.h>
#include<string.h>

int main(){

    char str1[20], str2[30];

    printf("Type a name: ");
    gets(str1);

    printf("Type another name: ");
    gets(str2);

    char temp[20];

    printf("\nBefore swaping:\n");

    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1, str2);
    strcpy(str2,temp);

    printf("\n\nAfter swaping:\n");

    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);

    return 0;
}
