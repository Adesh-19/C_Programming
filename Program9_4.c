#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int ivalue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&ivalue);

    iRet = OddFactorial(ivalue);

    printf("The Odd Factorial of given number is : %d",iRet);

    return EXIT_SUCCESS;
}