#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next; // self ref structure
} *head = NULL, *last = NULL;

void addNode(int num)
{
    struct node *tmp = NULL;
    if (head == NULL)
    {
        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void printData()
{
    struct node *i;
    i = head;
    printf("\nLinked List Data : \n");
    while (i != NULL)
    {
        printf(" %d", i->data);
        i = i->next;
    }
}

void addBegNode(int num)
{
    struct node *tmp;

    tmp = malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head;
    head = tmp;
}

void searchNode(int num)
{
    int found = 0;
    struct node *i;

    i = head;
    while (i != NULL)
    {
        if (i->data == num)
        {
            found = 1;
            break;
        }
        i = i->next;
    }

    if (found == 1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot found");
    }
}

void insertAny(int source, int num)
{
    int found = 0;
    struct node *i;
    struct node *tmp;

    i = head;
    while (i != NULL)
    {
        if (i->data == source)
        {
            found = 1;
            break;
        }
        i = i->next;
    }

    if (found == 1)
    {
        // new node
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = i->next;
        i->next = tmp;
    }
    else
    {
        printf("\nSource Not found");
    }
}

void delBeg()
{
    struct node *tmp;

    tmp = head;
    head = head->next;
    free(tmp);
}

void delLast()
{
    // del Last
    struct node *p, *tmp;
    tmp = last;

    p = head;

    while (p->next != last)
    {
        p = p->next;
    }
    p->next = NULL;
    last = p;
    free(tmp);
}

void delAny(int source)
{
    // search
    // delete
}

int main()
{

    int choice;
    int num, source;
    while (1)
    {
        printf("\n0 For Exit");
        printf("\n1 For New Movie");
        printf("\n2 For List All Movie");
        printf("\n3 For Add Beg");
        printf("\n4 For Search");
        printf("\n5 For Insert Any");
        printf("\n6 For Delete Any");
        printf("\n7 For Delete Last");
        printf("\n8 For Delete Beg");

        printf("\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the number");
            scanf("%d", &num);
            addNode(num); // 10 20  30
            break;
        case 2:
            printData();
            break;
        case 3:
            printf("\nEnter the number");
            scanf("%d", &num);
            addBegNode(num); // 40
            break;
        case 4:
            printf("\nEnter the number that you want to search ");
            scanf("%d", &num);
            searchNode(num); // 10 20  30
            break;
        case 5:
            printf("\nSource node : ");
            scanf("%d", &source); // 20
            printf("\nEnter node value : ");
            scanf("%d", &num); // 60
            insertAny(source, num);

        case 0:
            exit(0);
        }
    }
    return 0;
}