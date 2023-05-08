
// write a program to find factorial of number 
////////////////////////////////////////////////////////////////////////////////
//
//  function:       Factorial
//  Input :         Integer
//  Output :        Integer
//  Description :   to find factorial of number 
//  Author :        Dipak Suresh Narkhede
//  Date :          08/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact =1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt<= iNo; iCnt++)
    {
     // printf("%d\t",iCnt);
      iFact = iFact * iCnt;
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of given number is %d",iRet);
   

    return 0;
}

// Output :
// Enter the number 
// 5
// Factorial of given number is 120