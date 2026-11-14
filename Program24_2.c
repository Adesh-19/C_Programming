#include<stdio.h>
#include<stdlib.h>

int CountCharacter(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }

        str++;
    }

    return iCount;
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

    iRet = CountCharacter(Arr,cValue);

    printf("Freuency of %c is %d times",cValue,iRet);

    return EXIT_SUCCESS;
}