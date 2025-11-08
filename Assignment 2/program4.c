#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Description     :   Used to display the same number multiple time provided by user
//  Input           :   Integer, Integer.
//  Output          :   Integer, Integer,Integer, Integer,.........
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

int Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

        if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

     for(iCnt = 1; iCnt <= iFrequency; iCnt++)
     {
        printf("%d \t",iNo);
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
    int iCount = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}