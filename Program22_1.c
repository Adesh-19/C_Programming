#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow)
{
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue1 = 0;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    Pattern(iValue1);

    return EXIT_SUCCESS;
}