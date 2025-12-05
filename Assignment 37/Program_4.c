////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   LastOccura
//  Description     :   Return last index value of given character
//  Input           :   String, Character
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

int LastOccura(char str[], char ch)
{
    int iIndex = 0;
    int iLast = -1;

    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
            iLast = iIndex;
        }
        iIndex++;
    }
    return iLast;
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

    iRet = LastOccura(arr,cValue);

    printf("Character location is : %d",iRet);

    return 0;
}