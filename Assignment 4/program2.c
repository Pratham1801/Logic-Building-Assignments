#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ReverseFactor
//  Description     :   Used to Display factors in reverse order
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void FactorReverse(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 1;

    for (iCnt = (iNo /2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            //printf("%d\t", iCnt);
            printf("%d \t",iCnt);
        }
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

    printf("Enter number : \n");
    scanf("%d",&iValue);

    FactorReverse(iValue);

    return 0;
}