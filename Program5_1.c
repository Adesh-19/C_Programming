#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        printf("%d is Greatest number \n",iNo1);
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        printf("%d is Greatest number \n",iNo2);
    }
    else
    {
        printf("%d is Greatest number \n",iNo3);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter second number : \n");
    scanf("%d",&iValue2);

    printf("Enter third number : \n");
    scanf("%d",&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}