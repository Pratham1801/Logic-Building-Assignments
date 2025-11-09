#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Multiply
//  Description     :   Used to multiply three number take from 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iCount = 0;
    int iResult = 1;

    if(iNo1 != 0)
    {
        iResult = iResult * iNo1;
        iCount++;
    }
    if(iNo2 != 0)
    {
        iResult = iResult * iNo2;
        iCount++;
    }
    if(iNo3 != 0)
    {
        iResult = iResult * iNo3;
        iCount++;
    }
    if(iCount= 0)
    {
        return 0;
    }

    return iResult;
}

////////////////////////////////////////////////////////////////////////
//
//  Entry point function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int ivalue2 = 0;
    int ivalue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers : \n");
    scanf("%d %d %d", &iValue1, &ivalue2, &ivalue3);

    iRet = Multiply(iValue1,ivalue2,ivalue3);

    printf("%d",iRet);

    return 0;
}