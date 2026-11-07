#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 0;

    iMult = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    
    printf("The multiplication of factors is : %d",iRet);

    return EXIT_SUCCESS;
}