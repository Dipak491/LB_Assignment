// Write a program which accept total marks & obtained marks from user and calculate percentage.

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         integer
//  Output :        float
//  Description :   perform to calculate percentage  
//  Author :        Dipak Suresh Narkhede
//  Date :          07/05/2023
//
/////////////////////////////////////////////////////////////////////////////////


float Percentage(int iNo1,int iNo2)
{ 
    return (float)iNo2/iNo1 * 100;  //typecast convert into float 
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    float fRet = 0.0f;

    printf("Enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks: \n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is %.1f%%",fRet);  //.1f  0.0


    return 0;
}

// output:
// Enter total marks:
// 1000
// Enter obtained marks: 
// 745
// Percentage is 74.5%