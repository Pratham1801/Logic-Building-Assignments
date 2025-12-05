////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountSmall
//  Description     :   Used to count small alphabets in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountSmall( char str[])
{   

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : Main
//
////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter String :\n");
    scanf("%[^'\n]s",arr);

    iRet = CountSmall(arr);
    
    printf("Count of Small Letter is :%d",iRet);
    return 0;
}