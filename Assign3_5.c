// 5.Write a program which accept number from user and return difference be
// summation of all its factors and non factors.

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Input :         integer
//  Output :        integer
//  Description :   Print difference between factor and non factor
//  Author :        Dipak Suresh Narkhede
//  Date :          06/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt =0;
    int iFact =0;
    int iNonfact = 0;

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iFact = iFact + iCnt;
            
        }
        else if(iNo%iCnt!=0 && iNo!=iCnt)
        {
            iNonfact = iNonfact + iCnt;
        }
        
    }
    return iFact - iNonfact;

}
int main()
{   
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("The differnce is %d",iRet);


    return 0;
}

// output:
// Enter the number : 
// 12
// The differnce is -34