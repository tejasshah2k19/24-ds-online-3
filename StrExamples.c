#include <stdio.h>
#include <string.h>

void strLength()
{
    int i;
    int cnt = 0;
    char str[100];
    printf("\nEnter String");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        cnt++;
    }

    printf("\nTotal char = %d", cnt);
}

// royal-> ROYAL
// Royal -> ROYAL
void lowerToUpper()
{
    int i;
    char str[100];
    printf("\nEnter String");
    gets(str);

    // ASCII

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    // A 65 B 66
    // a 97 b 98   {32}
    printf("\nSTR = %s", str);
}

void upperToLower()
{
    int i;
    char str[100];
    printf("\nEnter String");
    gets(str);

    // ASCII

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    // A 65 B 66
    // a 97 b 98   {32}
    printf("\nSTR = %s", str);
}

// str => royal
// str => royal2 => string copy
void stringCopy()
{
    int i;
    char str[100];
    char str2[100];
    printf("\nEnter String");
    gets(str);

    // ASCII

    for (i = 0; str[i] != '\0'; i++)
    {
        str2[i] = str[i];
    }
    str2[i] = '\0';
    // A 65 B 66
    // a 97 b 98   {32}
    printf("\nSTR = %s", str);
    printf("\nSTR2 = %s", str2);
}

// str = royal
// str2 = edu

// append str <- str2
// str -> royaledu

// append str2 <- str
// str2 -> eduroyal

// concat
// str = royal
// str2 = edu
// str3 = royaledu

int main()
{

    int i, j;
    char str[100];
    char str2[100];
    printf("\nEnter two String");
    gets(str);
    gets(str2);

    // ASCII

    printf("\nSTR = %s", str);
    printf("\nSTR2 = %s", str2);

    for (i = 0; str[i] != '\0'; i++)
        ;

    for (j = 0; str2[j] != '\0'; j++, i++)
    {
        str[i] = str2[j];
    }
    str[i] = '\0';

    // A 65 B 66
    // a 97 b 98   {32}
    printf("\nSTR = %s", str);
    printf("\nSTR2 = %s", str2);

    return 0;
}
