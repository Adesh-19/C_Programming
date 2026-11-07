#include<stdio.h>
#include<stdlib.h>

void DisplayFactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = (iNo-1); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactRev(iValue);

    return EXIT_SUCCESS;
}