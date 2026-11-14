#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCount;
        }
        str++;
        iCount++;
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr,cValue);

    printf("Character location is : %d",iRet);

    return EXIT_SUCCESS;
}