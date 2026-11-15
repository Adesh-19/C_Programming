#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t%c\t%o\t%X\n",iCnt,iCnt,iCnt,iCnt);
    }
}

int main()
{

    DisplayASCII();

    return EXIT_SUCCESS;
}