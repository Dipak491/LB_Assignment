//3.Write a program which accept number from user and display all its non factors.


#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : NonFact
//  Input :         integer
//  Output :        integer
//  Description :   Performs to print Nonfactor 
//  Author :        Dipak Suresh Narkhede
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////


 void NonFact(int iNo)
{
    int iCnt =0;
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt != 0) 
        {
             printf("%d\t",iCnt);
        }
       
    }
}
int main()
{
    int iValue =0;
    
    printf("Enter a number \n");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}

// output:
// Enter a number 
// 12
// 5       7       8       9       10      11