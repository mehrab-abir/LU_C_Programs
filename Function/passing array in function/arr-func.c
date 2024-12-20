#include<stdio.h>

void showArr(int x[], int size){

    for(int i=0;i<size;i++){
        printf("%d\t",x[i]);
    }
}

int main(){

    int anArr[] = {10,24,35,43,20,25,13,54,98,25};

    int arraySize = sizeof(anArr)/sizeof(anArr[0]);

    showArr(anArr,arraySize);


    return 0;
}
