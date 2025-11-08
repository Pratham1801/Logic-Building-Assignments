#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckNumberType
//  Description     :   Used to Check give number is Positive, Negative, or Zero
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("%d is Positive ",iNo);
    }
    else if( iNo < 0)
    {
        printf("%d is Negative ",iNo);
    }
    else
    {
        printf("It is Zero ");
    }
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckNumberType(iValue);

    return 0;
}