#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckGreater
//  Description     :   Used to check given number is greater or smaller
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}