#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[30];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Entered string is : %s",Arr);

    return EXIT_SUCCESS;
}