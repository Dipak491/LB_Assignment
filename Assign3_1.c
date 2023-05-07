
//1.Write a program which accept number from user and display its multiplication of
//factors.

#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : MultFact
//  Input :         integer
//  Output :        integer
//  Description :   Performs multiplication of factors
//  Author :        Dipak Suresh Narkhede
//  Date :          05/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt =1; iCnt< iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;

}

int main()
{
    int iValue;
    int iRet = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("the multiplication of factor is %d",iRet);
    return 0;
}


//Time complexity of above proggram is O(N);

// Output:
// Enter the number 
// 12
// the multiplication of factor is 144
