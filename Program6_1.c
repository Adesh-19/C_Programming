#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iNo)
{
    float Bill = 0.0f;

    if(iNo <= 0)
    {
        printf("Inavlid Units \n");
    }
    else if((iNo >= 1) && (iNo <= 100))
    {
        Bill = iNo * 5;
        printf("Your total Bill is : %f\n",Bill);
    }
    else if((iNo >= 101) && (iNo <= 200))
    {
        Bill = (100 * 5) + ((iNo - 100) * 7);
        printf("Your total Bill is : %f\n",Bill);
    }
    else
    {
        Bill = (100 * 5) + (100 * 7) + ((iNo - 200) * 10);
        printf("Your total Bill is : %f\n",Bill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : \n");
    scanf("%d",&iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}