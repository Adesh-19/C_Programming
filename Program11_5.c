#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid range");
    }
    else
    {
        for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
        {
            printf("%d\t",iCnt);
        }
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the start of range : \n");
    scanf("%d",&iValue1);

    printf("Enter the stop of range : \n");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);

    return EXIT_SUCCESS;
}