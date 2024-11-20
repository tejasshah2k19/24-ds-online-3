#include <stdio.h>
#define SIZE 5

int q[SIZE];
int f = -1; // empty
int r = -1; // empty

void insert(int data)
{
    if (r == SIZE - 1)
    {
        printf("\nQueue is Full");
    }
    else
    {
        r++;
        q[r] = data;
        if (f == -1)
        {
            f = 0;
        }
    }
}

int remove()
{
    int data;
    if (f == -1)
    {
        return -1;
    }
    else
    {
        data = q[f];
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f++;
        }
        return data;
    }
}

void display()
{
    int i;
    for (i = f; i <= r; i++)
    {
        print(" %d", q[i]);
    }
}

int main()
{

    int choice;
    int data;

    while (1)
    {
        printf("\n1 For Add\n2 For Delete\n3 For Display\n0 For Exit");
        printf("\nEnter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            data = remove();
            printf("\n%d ", data);
            break;
        case 3:
            display();
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}