#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        printf("Both numbers are equal \n");
    }
    else if(iNo1 > iNo2)
    {
        printf("first number is Greator \n");
    }
    else
    {
        printf("%d second number is Greator \n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the first numbers : \n");
    scanf("%d",&iValue1);

    printf("Enter the second numbers : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}