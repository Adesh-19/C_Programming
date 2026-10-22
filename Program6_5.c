#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSal,int iYear)
{
    float fBonus = 0.0f;

    if((fSal < 0) || (iYear < 0))
    {
        printf("Invalid Details \n");
    } 
    else if(iYear > 10)
    {
        fBonus = fSal * (15.0 / 100);

        printf("Total Bonus is : %f",fBonus);
    }
    else if((iYear > 5) && (iYear <= 10))
    {
        fBonus = fSal * (10.0 / 100); 

        printf("Total Bonus is : %f",fBonus);
    }
    else
    {
        fBonus = fSal * (5.0 / 100);

        printf("Total Bonus is : %f",fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter the salary : \n");
    scanf("%f",&fSalary);

    printf("Enter the service year : \n");
    scanf("%d",&iYears);

    CalculateBonus(fSalary,iYears);

    return EXIT_SUCCESS;
}