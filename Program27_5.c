#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    printf("Modified string is : %s",Arr);

    return EXIT_SUCCESS;
}