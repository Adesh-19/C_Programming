#include<stdio.h>
#include<stdlib.h>

void pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int no1 = 2, no2 = 3, no3 = 4;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1)
            {
                printf("%d\t",j);
            }
            else if(i == 2)
            {
                printf("%d\t",no1);
                no1++;
            }
            else if(i == 3)
            {
                printf("%d\t",no2);
                no2++;
            }
            else
            {
                printf("%d\t",no3);
                no3++;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}