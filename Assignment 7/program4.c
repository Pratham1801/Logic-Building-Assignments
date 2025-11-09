#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   OddDisplay
//  Description     :   Used to print all Odd numbers till N.
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d \t",iCnt);
        }
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;

}