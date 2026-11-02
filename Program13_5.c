#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iOddSum = 0, iEvenSum = 0, iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }

        iDiff = iEvenSum - iOddSum;

        
    }
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("The diff between even and odd digits is : %d",iRet);

    return EXIT_SUCCESS;
}