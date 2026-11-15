#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Converted case is : %c",ch+32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Converted case is : %c",ch-32);
    }
    else
    {
        printf("Not able to conver the case of : %c",ch);
    }
}

int main()
{   
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}