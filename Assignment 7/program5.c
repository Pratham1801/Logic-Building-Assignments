#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Description     :   Used to print first 5 multiple of N.
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        printf("%d \t",iNo * iCnt);
    }
}

// Time Complexity :- O(1)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}