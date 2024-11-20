#include<stdio.h>
#include<stdlib.h> 


int main(){

    int *arr;//arr[5]
    int i;
    arr = calloc(5,sizeof(int));//TC 10 byte , GCC 20 Byte   

    for(i=0;i<5;i++){
        printf("\nEnter value");
        scanf("%d",&arr[i]);
    }

    printf("\nArray Data: \n");
    for(i=0;i<5;i++){
        printf("\n%d ",arr[i]);
    }
    return 0; 
}