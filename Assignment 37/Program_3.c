////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FirstChar
//  Description     :   Return Index value of given
//  Input           :   String, Character
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

int FirstChar(char str[], char ch)
{
    int iIndex = 0;

    while(str[iIndex] != '\0')
    {
        if(str[iIndex] == ch)
        {
            return iIndex;
            break;
        }
        iIndex++;
    }
    return -1;
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is : %d",iRet);

    return 0;
}