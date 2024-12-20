#include<stdio.h>
#include<string.h>

int main(){

    char name[5][20], temp[20];
    int i,j;

    /*char str1[] = "H";
    char str2[] = "I";

    int d = strcmp(str1,str2);

    printf("%d",d);*/


    for(i=0;i<5;i++){
        printf("Enter name %d: ",i+1);
        gets(name[i]);
    }

    for(i=0;i<4;i++){
        for(j=0;j<5-1;j++){
            if(strcmp(name[j],name[j+1]) > 0){
                strcpy(temp, name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    printf("\nSorted string: ");

    for(i=0;i<5;i++){
        printf("\n%s",name[i]);
    }

    return 0;
}
