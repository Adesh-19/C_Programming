#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iNO1, int iNo2)
{
    int iCnt = 0;

    if(iNO1 > iNo2)
    {
        printf("Invalid range\n");
    }
    else
    {
        for(iCnt = iNO1; iCnt <= iNo2; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the start of range : \n");
    scanf("%d",&iValue1);

    printf("Enter the stop of the range : \n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return EXIT_SUCCESS;
}