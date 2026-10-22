#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    iCnt = 1;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d \t",iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter the actual value : \n");
    scanf("%d",&iValue);

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return EXIT_SUCCESS;
}