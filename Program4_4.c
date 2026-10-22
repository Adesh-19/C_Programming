#include<stdio.h>
#include<stdlib.h>


void CheckVotingElegibility(int iNo)
{
    if(iNo <= 0)
    {
        printf("Invalid Age \n");
    }
    else if((iNo >= 1) && (iNo < 18))
    {
        printf("You are not eligible for voting \n");
    }
    else
    {
        printf("You are eligible forvoting \n");
    }
    
}

int main()
{
    int iAge = 0;

    printf("Enter your age : \n");
    scanf("%d",&iAge);

    CheckVotingElegibility(iAge);

    return EXIT_SUCCESS;
}