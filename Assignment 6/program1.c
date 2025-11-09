#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Main
//  Description     :   Used to print full name accepted from user
//  Input           :   String
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////


int main()
{
    char Name[30];

    printf("Please enter full name : \n");
    scanf("%[^\n]s",&Name);                 // %[^\n]s :- will read everything till next line.

    printf("Your name is %s",Name);

    return 0;
}