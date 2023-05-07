//write  a program which accept number from user and print numbers till that number.


/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         Integer
//  Output :        Integer
//  Description :   perform to accept number from user and print numbers till that number.
//  Author :        Dipak Suresh Narkhede
//  Date :          07/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{   
    int iValue = 1;
    printf("Enter the number \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}

//output:
// Enter the number 
// 8
// 1       2       3       4       5       6       7       8