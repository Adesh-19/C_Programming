#include<stdio.h>
#include<stdlib.h>

int SumDiffFact(int iNo)
{
    int iCnt = 0, iFactSum = 0, iNonFactSum = 0, iFactDiff = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iFactDiff = iFactSum - iNonFactSum;

    return iFactDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = SumDiffFact(iValue);

    printf("Difference between the factors and non-factors are : %d",iRet);

    return EXIT_SUCCESS;
}