#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cVal)
{
    if((cVal >= 'A') && (cVal <= 'Z'))
    {
        printf("Uppercase Alphabet \n");
    }
    else if((cVal >= 'a') && (cVal <= 'z'))
    {
        printf("Lowercase Alphabet \n");
    }
    else if((cVal >= '0') && (cVal <= '9'))
    {
        printf("Digit \n");
    }
    else    
    {
        printf("Special Character \n");
    }
}


int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}