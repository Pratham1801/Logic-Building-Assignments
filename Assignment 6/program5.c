#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Percentage
//  Description     :   Used to calculate percentage 
//  Input           :   Integer
//  Output          :   Integer
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

float Percentage(int iNo1, int iNo2)
{
    float fResult = 0.0f;

    if(iNo1 == 0)
    {
        return 0.0f;
    }

    fResult = ((float)iNo2 / (float)iNo1) * 100;
    
    return fResult;
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
    float fRet = 0;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : \n");
    scanf("%d",&ivalue2);

    fRet = Percentage(iValue1,ivalue2);

    printf("%0.3f",fRet);

    return 0;
}