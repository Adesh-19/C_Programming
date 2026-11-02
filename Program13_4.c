#include<stdio.h>
#include<stdlib.h>

int MultDigit(int iNo)
{
    int iDigit = 0, iMult = 0;

    iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit > 0)
        {
            iMult = iMult * iDigit;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("The multiplication of the digits of given number is : %d",iRet);

    return EXIT_SUCCESS;
}