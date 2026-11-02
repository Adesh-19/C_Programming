#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    if((iNo1 > iNo2) || (iNo1 < 0) || (iNo2 < 0))
    {
        printf("Invalid range\n");   
    }
    else
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            iSum = iSum + iCnt;
        }   
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the strat of range : \n");
    scanf("%d",&iValue1);

    printf("Enter the stop of the range : \n");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("The sum of the elements in between range is : %d",iRet);

    return EXIT_SUCCESS;
}