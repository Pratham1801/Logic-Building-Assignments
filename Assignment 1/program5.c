#include<stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   Divide
//  Description     :   Used to display number of * after taking input from user
//  Input           :   Integer, Integer
//  Output          :   Symbol
//  Author          :   Prathamesh Rajesh Bawane
//  Date            :   7/11/2025
//
////////////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("* \t");
    }
}

////////////////////////////////////////////////////////////////////////
//
// Entry Point Function : Main
//
////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0; 

    printf("Enter the number : \n");
    scanf("%d",&iValue);


    Accept(iValue);

    return 0;
}