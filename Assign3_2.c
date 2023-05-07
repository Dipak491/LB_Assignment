// 2.Write a program which accept number from user and display its factors in
// decreasing order.


#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactRev
//  Input :         integer
//  Output :        integer
//  Description :   Print reverse factor
//  Author :        Dipak Suresh Narkhede
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////


void FactRev(int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt>=0; iCnt--) 
    {
        if(iNo % iCnt == 0 && (iCnt != iNo))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}

// output:
// Enter the number 
// 12
// 6       4       3       2       1