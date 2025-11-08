#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   SumNonFactor
//  Description     :   Used to Display sum of non factors of a number
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSumNonfac = 0;

    for(iCnt =1; iCnt <= iNo; iCnt ++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonfac = iSumNonfac + iCnt;
        }
    }

    return iSumNonfac;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFactor(iValue);

    printf("%d",iRet);

    return 0;
}