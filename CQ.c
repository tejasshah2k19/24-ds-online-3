#include <stdio.h>
#define SIZE 5

int q[SIZE];

int f = -1;
int r = -1;

void insert(int num)
{
    if (r == SIZE - 1 && f == 0)
    {
        printf("\nQueue is Full");
    }
    else if (r == f - 1)
    {
        printf("\nQueue is Full");
    }
    else if (r == SIZE - 1)
    {
        // cq
        r = 0;
        q[r] = num;
    }
    else
    {
        // sq
        r++;
        q[r] = num;
        // first time
        if (f == -1)
        {
            f = 0;
        }
    }
}

int removeData()
{
    int delNum;
    if (f == -1)
    {
        printf("\nQueue is Empty");
        return -1;
    }
    else
    {

        delNum = q[f];
        if (f == r)
        {
            // last element
            f = -1;
            r = -1;
        }
        else if (f == SIZE - 1)
        {

            f = 0;
        }
        else
        {
            f++;
        }
        return delNum;
    }
}

void display()
{
    int i;
    if (f <= r)
    {
        for (i = f; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
    else
    {
        for (i = f; i < SIZE; i++)
        {
            printf(" %d", q[i]);
        }
        for (i = 0; i <= r; i++)
        {
            printf(" %d", q[i]);
        }
    }
}

int main()
{
    int choice;
    int num;

    while (1)
    {
        printf("\n1 For Insert\n2 For Remove\n3 For Display\n4 For Exit\nEnter chocie");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            num = removeData();
            if (num != -1)
            {
                printf("\n%d removed", num);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}