#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("The Factorial of given number is : %d",iRet);

    return EXIT_SUCCESS;
}