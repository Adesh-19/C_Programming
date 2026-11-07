#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercent = 0.0f;

    if((iNo1 <= 0) || (iNo2 <= 0))
    {
        return 0;
    }
    else
    {
        fPercent = ((float)iNo2 / (float)iNo1) * 100;
    }

    return fPercent;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0f;

    printf("Enter the total marks : \n");
    scanf("%d",&iValue1);

    printf("Enter the obtained marks : \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Your percentage is : %.2f %%",fRet);

    return EXIT_SUCCESS;
}