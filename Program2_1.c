#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while(iCnt < (iNo+1))
    {
        printf("*\n");
        iCnt++;
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