////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CountChar
//  Description     :   Used to print the count of the present character
//  Input           :   String, Character
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        *(str)++;
    }
    return iCount;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s",arr);

    printf("Enter the Character : \n");
    scanf(" %c", &cValue);

    iRet = CountChar(arr,cValue);

    printf("Character frequency is : %d",iRet);

    return 0;
}