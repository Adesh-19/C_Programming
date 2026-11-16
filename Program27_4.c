#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{   
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("String contains vowels");
    }
    else
    {
        printf("String does not contain vowels");
    }


    return EXIT_SUCCESS;
}