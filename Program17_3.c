#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    char ch = 'a';
    int no = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) != 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%d\t",no);
                no++;
            }
        }

        if(ch > 'e')
        {
            ch = 'a';
        }

        if(no > 5)
        {
            no = 1;
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

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}