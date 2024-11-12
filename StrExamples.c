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

void stringAppend()
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
}

void stringCompare()
{
    char str1[50];
    char str2[50];
    int len1 = 0;
    int len2 = 0;
    int i;
    int same = 0;

    printf("\nEnter two String");
    gets(str1);
    gets(str2);

    for (i = 0; str1[i] != '\0'; i++)
    {
        len1++;
    }

    for (i = 0; str2[i] != '\0'; i++)
    {
        len2++;
    }

    if (len1 != len2)
    {
        printf("\nString are not same");
        return;
    }

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            same = 1;
        }
    }
    if (same == 1)
    {
        printf("\nString are not same");
    }
    else
    {
        printf("\nString are same");
    }
}

void stringCompare()
{
    char str1[50];
    char str2[50];
    int i, j;
    int found = 0;

    printf("\nenter main string");
    gets(str1);

    printf("\nenter search string");
    gets(str2);

    j = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {

        if (str1[i] == str2[j])
        {
            while (str1[i] == str2[j])
            {
                if (str2[j] == '\0')
                {
                    found = 1;
                }
                i++;
                j++;
            }
            j=0;
        }
 
    }
}

int main()
{

    return 0;
}
