////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Accept character from usr and if it is capital then display character till Z and if it is small then print characters till A
//  Input           :   Character
//  Output          :   Character......
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

void Display( char ch)
{   

    if(ch >= 'A' && ch <= 'Z')
    {
        for(char c = ch; c <= 'Z'; c++)
        {
            printf("%c\t",c);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(char c = ch; c >= 'a'; c--)
        {
            printf("%c\t",c);
        }
    }
    else
    {
        printf("%c");
    }
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : Main
//
////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char cValue = '\0';
    
    printf("Enter the Character : \n");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}