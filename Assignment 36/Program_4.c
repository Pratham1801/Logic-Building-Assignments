////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayDigit
//  Description     :   Accept String from user and print digits from that string
//  Input           :   String
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void DisplayDigit(char *str)
{
    int iCnt = 0;
    
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')
        {
            printf("%c",str[iCnt]);
        }
        
    }
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

    DisplayDigit(arr);

    return 0;
}