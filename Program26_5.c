#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Charcter Decimal Octal HexaDecimal\n");
    printf("%c\t%d\t%o\t%X\n",ch,ch,ch,ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}