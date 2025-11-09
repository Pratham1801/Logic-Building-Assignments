#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEqual
//  Description     :   Used to check given number is Equal or NotEqual
//  Input           :   Integer
//  Output          :   String
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////


bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers :\n");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = CheckEqual(iValue1,iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0 ;
}