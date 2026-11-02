#include<stdio.h>
#include<stdlib.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("The count of digits between 3 and 7 is : %d",iRet);

    return EXIT_SUCCESS;
}