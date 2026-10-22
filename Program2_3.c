#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Helllo \n");
    }
    else
    {
        printf("Demo \n");
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