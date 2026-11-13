#include<stdio.h>
#include<stdlib.h>

void Struprx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
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
    scanf("%[^'\n']s",&Arr);

    Struprx(Arr);

    printf("Modified String is : %s",Arr);

    return EXIT_SUCCESS;
}