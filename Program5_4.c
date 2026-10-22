#include<stdio.h>
#include<stdlib.h>

void ChkMultipleDivisibility(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) == 0)
        {
            printf("Divisible by both 3 and 5 \n");
        }
        else
        {
            printf("Divisible by 3 \n");
        }
    }
    else
    {
        if((iNo % 5) == 0)
        {
            printf("Divisible by 5 \n");
        }
        else
        {
            printf("Not Divisible by anyone of them \n");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    ChkMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}