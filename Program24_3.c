#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCount;
        }
        iCount++;
        str++;
    }

    return -1;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character to search : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(Arr,cValue);

    printf("character location is : %d",iRet);

    return EXIT_SUCCESS;
}