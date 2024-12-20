#include<stdio.h>
#include<string.h>

int main(){

    char str1[30], str2[30];
    int len=0,i=0,j;

    printf("Type something: ");
    gets(str1);

    while(str1[i] != '\0'){
        i++;
        len++;
    }

    for(i=len-1,j=0;i>=0;i--,j++){
       str2[j] = str1[i];
    }
    str2[j] = '\0';

    printf("\nString 1 = %s",str1);
    printf("\nString 2 = %s",str2);

    return 0;
}
