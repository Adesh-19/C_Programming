#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNO)
{
    int iCnt = 0, iFact = 0;

    iFact = 1;

    if(iNO < 0)
    {
        iNO = -iNO;
    }

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("The Even factorial of given number is : %d",iRet);

    return EXIT_SUCCESS;
}