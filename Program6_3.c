#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount <= 0)
    {
        printf("Invalid amount \n");
    }
    else if(fAmount < 1000)
    {
        fDiscount = fAmount * (0.0 / 100);
        fFinalAmount = fAmount - fDiscount;

        printf("Total payable amount is : %f",fFinalAmount);
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = fAmount * (10.0 / 100);
        fFinalAmount = fAmount - fDiscount;

        printf("Total payable amount is : %f",fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * (20.0 /100);
        fFinalAmount = fAmount - fDiscount;

        printf("Total payable amount is : %f",fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : \n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}