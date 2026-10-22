#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cVal)
{
    if(cVal == 'a')
    {
        printf("%c",65);
    }
    else if(cVal == 'D')
    {
        printf("%c",100);
    }
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}