#include<stdio.h>
#include<stdlib.h>

void ChkEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("The given number is Even \n");
    }
    else
    {
        printf("The given number Odd \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ChkEvenOdd(iValue);

    return EXIT_SUCCESS;
}