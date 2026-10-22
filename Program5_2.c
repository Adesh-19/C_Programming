#include<stdio.h>
#include<stdlib.h>

void ChkLeapYear(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Year \n");
    }
    else if((iNo % 4) == 0 && (iNo % 100) != 0)
    {
        printf("This is a Leap Year \n");
    }
    else
    {
        printf("This is not a Leap Year \n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter the year : \n");
    scanf("%d",&iYear);
    
    ChkLeapYear(iYear);

    return EXIT_SUCCESS;
}