#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
    
}

int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%s",Arr);

    DisplayDigit(Arr);

    return EXIT_SUCCESS;
}