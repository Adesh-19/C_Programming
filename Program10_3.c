#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = 1000;

    iNo = iNo * iMeter;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance converted into Meter is : %d",iRet);

    return EXIT_SUCCESS;
}