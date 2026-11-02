#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("The number of digits which are less than 6 is : %d",iRet);

    return EXIT_SUCCESS;
}