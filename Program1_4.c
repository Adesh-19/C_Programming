#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {

        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL iRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Check(iValue);

    if(iRet == TRUE)
    {
        printf("The number is divisible by 5");
    }
    else
    {
        printf("The number is not divisible by 5");
    }


    return EXIT_SUCCESS;
}