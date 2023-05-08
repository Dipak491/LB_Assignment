
// write aprogram which accept input number from user and print reverse table

////////////////////////////////////////////////////////////////////////////////
//
//  function:       Number
//  Input :         Integer
//  Output :        Integer
//  Description :   program which accept input number from user and print reverse table
//  Author :        Dipak Suresh Narkhede
//  Date :          08/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RevTable(int iNo)
{
    int iCnt =1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >=1; iCnt--)
    {
        printf("%d\t",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    RevTable(iValue);
   

    return 0;
}