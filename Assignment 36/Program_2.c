////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   StruprX
//  Description     :   Used to convert all lowercase characters to uppercase characters
//  Input           :   String
//  Output          :   Boolean
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void StruprX(char *str)
{
    int iCnt = 0;
    
    while(*str != '\0')
   {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
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

    StruprX(arr);

    printf("Modified String is : %s",arr);

    return 0;
}