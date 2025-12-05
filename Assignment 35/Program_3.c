////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Difference
//  Description     :   Used to Display Difference between small character and capital character
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////


int Difference( char *str)
{   
    int cap = 0;
    int small = 0;

    while(*str != '\0')
    {  
        if(*str >= 'a' && *str <= 'z')
        {
            small++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            cap++;
        }
        str++;
    }
    return small - cap;
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

    iRet = Difference(arr);

    printf("%d",iRet);
    
    return 0;
}