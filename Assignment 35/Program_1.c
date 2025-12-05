////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountCapital
//  Description     :   Used to count capital alphabets in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////

int CountCapital( char str[])
{   

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
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

    iRet = CountCapital(arr);
    
    printf("Count of Capital Letter is :%d",iRet);
    return 0;
}