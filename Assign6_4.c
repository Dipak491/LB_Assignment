// write aprogram which accept input number from user and print table

////////////////////////////////////////////////////////////////////////////////
//
//  function:       Table
//  Input :         Integer
//  Output :        Integer
//  Description :   program which accept input number from user and print table
//  Author :        Dipak Suresh Narkhede
//  Date :          08/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt<= 10; iCnt++)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    Table(iValue);
   

    return 0;
}

// OUTPUT:

// Enter the number 
// 2
// 2       4       6       8       10      12      14      16      18      20