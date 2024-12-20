#include<stdio.h>

//linear search- search an element of an array
int main(){
     int anArr[] = {10,35,34,65,32,14,98,52,18,20},i, value;
     int size = sizeof(anArr)/sizeof(anArr[0]);

     printf("Search a number: ");
     scanf("%d",&value);

     int position = -1;

     for(i=0;i<size;i++){
        if(value == anArr[i]){
            position = i+1; //for our convenience
        }
     }
     if(position == -1){
        printf("\nNot found");
     }
     else{
        printf("\nThe position of %d is %d",value,position);
     }

    return 0;
}
