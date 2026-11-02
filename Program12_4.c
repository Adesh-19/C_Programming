#include<stdio.h>
#include<stdlib.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("The 4 occurs %d times in the given number\n",iRet);

    return EXIT_SUCCESS;
}