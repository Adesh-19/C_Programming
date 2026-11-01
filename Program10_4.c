#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fNo)
{
    double dCelcius = 0.0;

    dCelcius = (fNo - 32) * ((float)5 / (float)9);

    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the temperature in Ferhanite : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature converted into Celcius is : %.4lf",dRet);

    return EXIT_SUCCESS;
}