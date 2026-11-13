#include<stdio.h>
#include<stdlib.h>

void StrtoogleX(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    StrtoogleX(Arr);

    printf("The modified string is : %s",Arr);

    return EXIT_SUCCESS;
}