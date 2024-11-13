#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int data)
{
    if (top == SIZE - 1)
    {
        printf("\nStack is Full");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

int main()
{
    int choice;
    int data; 
    while (1)//true --> infinite 
    {
        printf("\n1 For Push\n2 For Display\n3 For POP\n0 For Exit\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter data");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("MAW");
            break;
        case 0:
            exit(0);
        }
    }
    return 0;
}