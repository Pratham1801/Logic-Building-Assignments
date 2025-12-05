////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Description     :   Used to check vowel is present in string or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   01/12/2025
//
////////////////////////////////////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel( char *str)
{   

    int iCount = 0;
   
    while(*str != '\0')
    {
        if(*str == 'a' || *str =='e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str =='E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

////////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : Main
//
////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    char arr[20];
    BOOL bRet = 0;
    
    printf("Enter String :\n");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }    
    return 0;
}