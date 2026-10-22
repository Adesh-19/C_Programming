#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVal)
{
    if(cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u')
    {
        return TRUE;
    }
    else if(cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
    {
        return TRUE;
    }
    else
    {
        FALSE;
    }
} 

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is vowel \n");
    }
    else
    {
        printf("It is not vowel \n");
    }

    return EXIT_SUCCESS;
}