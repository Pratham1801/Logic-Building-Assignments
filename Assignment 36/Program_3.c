////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StrtoggleX
//  Description     :   Used to convert convert the string from lowercase to uppercase vise varsa
//  Input           :   String
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StrtoggleX(char *str)
{
    int iCnt = 0;
    
   while(*str != '\0')
   {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str -32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str +32;
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

    StrtoggleX(arr);

    printf("Modified String is : %s",arr);

    return 0;
}