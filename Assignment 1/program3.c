#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to display the numbers form 5 to 1 on screen
//  Input           :   -
//  Output          :   5   4   3   2   1
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void Display()
{
    int iCnt = 0;
    iCnt = 5;
    while(iCnt>=1)
    {
        printf("%d \t",iCnt);
        iCnt--;
    }
}

////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    Display();

    return 0;
}