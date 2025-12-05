////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrlwrX
//  Description     :   Used to convert all uppercase character to lowercase character
//  Input           :   String
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrlwrX(char *str)
{
    int iCnt = 0;
    
    while(*str != '\0')
   {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
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

    StrlwrX(arr);

    printf("Modified String is : %s",arr);

    return 0;
}