#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Description     :   Used to Check give year is leap year or not
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYr)
{
    if((iYr % 4 == 0) == 0 && (iYr % 100 != 0)  || (iYr % 400 == 0))
    {
        
        printf("%d is a Leap year", iYr); 
    }
    else
    {
        printf("%d is not a Leap year", iYr);
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter year: \n");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return 0;
}