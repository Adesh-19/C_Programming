#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    if((iNo1 > iNo2) || (iNo1 < 0) || (iNo2 < 0))
    {
        printf("Invalid range \n");
    }
    else
    {
        for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the start of range : \n");
    scanf("%d",&iValue1);

    printf("Enter the end of range : \n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("The sum of even numbers from the range is : %d",iRet);

    return EXIT_SUCCESS;
}