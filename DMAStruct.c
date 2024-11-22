#include<stdio.h>
#include<stdlib.h>


struct movie{
    char name[20];
    int year; 

}*m=NULL;

int main()
{

    m = malloc(sizeof(struct movie));

    printf("\nEnter name and year");
    scanf("%s%d",&m->name,&m->year);

    printf("\nMovieName : %s",m->name);
    printf("\nYear : %d ",m->year); 

    return 0; 
}