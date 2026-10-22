#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo*2; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d \t",iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}