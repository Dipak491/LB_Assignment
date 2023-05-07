
//4.Write a program which accept numbe' r and return summation of all its non factors.

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Input :         integer
//  Output :        integer
//  Description :   Performs to print sun of non factors
//  Author :        Dipak Suresh Narkhede
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////


 int SumNonFact(int iNo)
{
    int iCnt =0;
    int iSum = 0;
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt == 0) 
        {
            continue;
        }
        else
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue =0;
    int iRet = 0;
    
    printf("Enter a number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Sumation of Nonfactor is %d",iRet);
    
    return 0;
}

// output:
// Enter a number 
// 12
// Sumation of Nonfactor is 50