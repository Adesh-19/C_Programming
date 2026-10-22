#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fNo)
{
    if(fNo < 0 || fNo > 100)
    {
        printf("Invalid Markas \n");
    }
    else if(fNo <= 100 && fNo >= 90)
    {
        printf("Grade : A \n");
    }
    else if(fNo <= 89 && fNo >= 75)
    {
        printf("Grade : B \n");
    }
    else if(fNo <= 74 && fNo >= 60)
    {
        printf("Grade : C \n");
    }
    else if(fNo <= 59 && fNo >= 40)
    {
        printf("Grade : D \n");
    }
    else if(fNo < 40)
    {
        printf("Fail \n");
    }
}

int main()
{
    float fMarks = 0;

    printf("Enter the marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}