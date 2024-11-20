#include<stdio.h>
#define SIZE 10 


//BIG O -> N 
//O(n) 

int main(){

    int search;
    int i;
    int found = 0;
    int a[] = {10,20,30,40,50,60,70,80,90,100};

    printf("\nEnter search num");
    scanf("%d",&search); //80

    for(i=0;i<SIZE;i++){
        if(a[i] == search){
            found = 1; 
            break; 
        }
    }

    if(found == 0){
        printf("\nNot Found");
    }else{
        printf("\nFound");
    }

    return 0;
}