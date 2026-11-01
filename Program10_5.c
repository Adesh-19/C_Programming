#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNO)
{
    double dMeter = 0.0;

    dMeter = 0.0929;

    dMeter = dMeter * iNO;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The area is converted into meters is : %lf",dRet);

    return EXIT_SUCCESS;
}