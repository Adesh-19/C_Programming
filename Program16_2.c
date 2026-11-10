#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    

    for(i = 1; i <= iRow; i++)
    {
        char ch1 = 'A', ch2 = 'a';
        if((i % 2) != 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch1);
                ch1++;
            }
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%c\t",ch2);
                ch2++;
            }
        }

        //ch1 = 'A';       //if the variables are global then after the 4 iterations of j loop ch1 
                           //becomes 'E' therefore we need to initialize the value of ch1 = 'A' at the end of the loop

        //ch2 = 'a';       //if the variables are global then after the 4 iterations of j loop ch1 
                           //becomes 'e' therefore we need to initialize the value of ch1 = 'a' at the end of the loop

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