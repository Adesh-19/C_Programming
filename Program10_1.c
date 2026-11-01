#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fNo)
{
    float fPI = 0.0f;
    double dArea = 0.0;

    fPI = 3.14;

    dArea = fPI * fNo * fNo;

    return dArea;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of the circle is : %.4lf",dRet);

    return EXIT_SUCCESS;
}