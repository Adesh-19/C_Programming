#include<stdio.h>
#include<stdlib.h>

void Display(int iNO)
{
    int iCnt = 0;

    for(iCnt = -iNO; iCnt <= iNO; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}