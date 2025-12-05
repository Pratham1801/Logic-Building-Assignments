////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountWhite
//  Description     :   Used to count space in string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void CountWhite(char *str)
{
    int iCnt = 0;
    
    while (*str != '\0')
    {
        if((*str == ' '))
        {
            iCnt++;
        }
        str++;
    }
    printf("Number of space is :%d\n",iCnt);
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",arr);

    CountWhite(arr);

    return 0;
}