#include<stdio.h>
#include<stdlib.h>

void ChkNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("The given number is Zero \n");
    }

    else if(iNo > 0)
    {
        printf("The given number is Positive \n");
    }

    else
    {
        printf("The given number is Negative \n");
    }
} 

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ChkNumber(iValue);

    return EXIT_SUCCESS;
}