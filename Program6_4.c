#include<stdio.h>
#include<stdlib.h>

void ChkTriangle(int iS1, int iS2, int iS3)
{
    if(iS1 < 0 || iS2 < 0 || iS3 < 0)
    {
        printf("Invalid Sides \n");
    }
    else if((iS1 + iS2) > iS3 && (iS2 + iS3) > iS1 && (iS1 + iS2) > iS2)
    {
        printf("Valid Triange \n");
    }
    else
    {
        printf("Invalid Triangle \n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter the first side : \n");
    scanf("%d",&iSide1);

    printf("Enter the second side : \n");
    scanf("%d",&iSide2);

    printf("Enter the third side : \n");
    scanf("%d",&iSide3);

    ChkTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}