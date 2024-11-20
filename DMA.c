#include<stdio.h>
#include<stdlib.h> 


int main(){

    int *a; //single variable 
    int *b; //array 

    a = malloc(4); //4 byte 
    b = calloc(10,4); //4 byte -> 10 items 

    free(a); 
    free(b); 
 
    return 0;
}