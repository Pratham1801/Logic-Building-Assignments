////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrRevX
//  Description     :   Used to reverse string
//  Input           :   String
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrRevX(char *str)
{
    char * temp = str;

    while(*str != '\0')
    {
        *str++;
    }

    while(str >= temp)
    {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    // ssprintf("Modified string is %s", arr);

    return 0;
}