#include <stdio.h>
#define SIZE 10

// BIG O -> N
// O(n)

int main()
{

    int search;
    int min = 0, mid, max = SIZE - 1;
    int found = 0;
    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    printf("\nEnter search num");
    scanf("%d", &search); // 80

    while (max >= min)
    {
        mid = (min + max) / 2;

        if (a[mid] == search)
        {
            found = 1;
            break;
        }
        else if (a[mid] > search)
        {
            max = mid - 1;
        }
        else if (a[mid] < search)
        {
            min = mid + 1;
        }
    }
    
    if (found == 0)
    {
        printf("\nNot Found");
    }
    else
    {
        printf("\nFound");
    }

    return 0;
}