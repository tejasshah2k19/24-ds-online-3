#include <stdio.h>
#define SIZE 3

int a[5];
int i;

void scanArray()
{

    for (i = 0; i < SIZE; i++)
    {
        printf("\nEnter value");
        scanf("%d", &a[i]);
    }
}

void printArray()
{
    for (i = 0; i < SIZE; i++)
    {
        printf("\n %d", a[i]);
    }
}

void sum(){
    int sum =0;
    int i;
    for(i=0;i<SIZE;i++){
        sum = sum + a[i];
    }

    printf("\nSum = %d",sum);

}

int main()
{

    scanArray();
    printArray();
    sum();
    return 0;
}