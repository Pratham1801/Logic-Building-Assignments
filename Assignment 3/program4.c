#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayConvert
//  Description     :   Used to convert lowercase to uppercase and vice versa
//  Input           :   Character
//  Output          :   Character
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

char DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c",cValue+32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c",cValue-32);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}