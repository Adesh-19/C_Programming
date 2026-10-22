#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt = 0;
    
    iCnt = 5;

    while(iCnt >= 1)
    {
        printf("%d",iCnt);
        iCnt--;      
    }
    
}

int main()
{
    Display();

    return EXIT_SUCCESS;
}