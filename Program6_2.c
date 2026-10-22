#include<stdio.h>
#include<stdlib.h>

void ChkAdmission(float fMark, int iAge)
{
    if((fMark <= 0) || (fMark > 100) || (iAge <= 0))
    {
        printf("Invalid Details \n");
    }
    else if((fMark >= 60) && (fMark <= 100) && (iAge >= 17))
    {
        printf("You are eligible for the admission \n");
    }
    else
    {
        printf("You are not eligible for admission \n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter the marks : \n");
    scanf("%f",&fMarks);

    printf("Enter the age : \n");
    scanf("%d",&iAge);

    ChkAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}