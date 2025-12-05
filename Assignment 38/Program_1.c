////////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   strcpyrev
//  Description     :   Used to reverse string
//  Input           :   String
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   05/12/2025
//
////////////////////////////////////////////////////////////////////////

void strcpyrev(char * str, char * dest)
{
    char *end = str;

    while(*end != '\0')
    {
        *end++;
    }

    end--;

    while(end >= str)
    {
        *dest = *end;
        dest++;
        end--;
    }
    *dest = '\0';
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    char arr [30] = "Marvellous Python";
    char brr [30] = {'\0'};

    strcpyrev(arr , brr);

    printf("%s \n", brr);

    return 0;
}