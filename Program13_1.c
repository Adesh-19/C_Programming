#include<stdio.h>
#include<stdlib.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
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

    iRet = CountEven(iValue);

    printf("Total even digits in the give number is : %d",iRet);

    return EXIT_SUCCESS;
}