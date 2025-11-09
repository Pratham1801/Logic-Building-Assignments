#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to print N numbers.
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }

}

// Time Complexity :- O(n)

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


