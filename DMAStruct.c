#include <stdio.h>
#include <stdlib.h>

struct movie
{
    char name[20];
    int year;

} *m = NULL;

void getData()
{

    // input
}

void printData()
{

    // display
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n0 For Exit");
        printf("\n1 For New Movie");
        printf("\n2 For List All Movie");
        printf("\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            getData();
            break;
        case 2:
            printData();
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}
// take 3 movie details and print it
