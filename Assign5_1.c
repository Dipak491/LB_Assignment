//Write a program which accepts input from user and print that number of $ % * on screen


/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         integer
//  Output :        pattern
//  Description :   perform to accepts input from user and print that number of $ % * on screen
//  Author :        Dipak Suresh Narkhede
//  Date :          07/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{   
    int iValue = 1;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    
    Pattern(iValue);

    return 0;
}

// output:
// Enter the number 
// 4
// $       *       $       *       $       *       $       *