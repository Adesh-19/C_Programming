#include<stdio.h>
#include<stdlib.h>

void ChkDivisibility(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ChkDivisibility(iValue);

    return EXIT_SUCCESS;
}