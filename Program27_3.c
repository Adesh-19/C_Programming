#include<stdio.h>
#include<stdlib.h>

int ChkDifference(char *str)
{
    int iCnt1 = 0, iCnt2 = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt1++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt2++;
        }
        str++;
    }
    iDiff = iCnt2 - iCnt1;

    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = ChkDifference(Arr);

    printf("Difference between small and capital character : %d",iRet);

    return EXIT_SUCCESS;
}