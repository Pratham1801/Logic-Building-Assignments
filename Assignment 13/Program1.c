#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   PrintNumbers
//  Description     :   Used to print numbers till N 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   9/11/2025
//
////////////////////////////////////////////////////////////////////////

void PrintNumbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

// Time complexity :- O(n)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    PrintNumbers(iValue);

    return 0;
}