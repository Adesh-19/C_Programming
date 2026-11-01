#include<stdio.h>
#include<stdlib.h>

int DollarToInr(int iNO)
{
    int iCnt = 0;

    iCnt = 70;

    iNO = iNO * iCnt;

    return iNO;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the USD : \n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("The value of INR is : %d",iRet);

    return EXIT_SUCCESS;

}