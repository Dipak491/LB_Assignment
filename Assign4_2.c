#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         integer
//  Output :        Char
//  Description :   perform to print if number greater than 100 to print greater otherwise smaller 
//  Author :        Dipak Suresh Narkhede
//  Date :          06/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL CheckNumber(int iNo)
{
    if(iNo>= 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{   
    int iValue;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = CheckNumber(iValue);
    if(bRet > 100)
    {
        printf("GREATER");
    }
    else
    {
        printf("SMALLER");
    }

    return 0;
}

// output:
// Enter the number : 75
// SMALLER