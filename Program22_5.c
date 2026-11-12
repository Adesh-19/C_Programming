#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow)
{
    int i = 0;

    for(i = 1; i <= iRow * 2; i++)
    {
        if((i % 2) == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}