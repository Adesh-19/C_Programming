#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 0, iOddFact = 0, iFactDiff = 0;

    iEvenFact = 1;
    iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }

    }

    iFactDiff = iEvenFact - iOddFact;

    return iFactDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("The factorial difference is : %d",iRet);

    return EXIT_SUCCESS;
}