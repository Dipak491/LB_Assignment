#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         Integer
//  Output :        Integer
//  Description :   perform to accept  number from user and print its odd numbers.
//  Author :        Dipak Suresh Narkhede
//  Date :          07/05/2023
//
/////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for (iCnt =1; iCnt<= iNo; iCnt++)
    {
        if(iCnt%2 == 1)   //(if(icnt%2 != 0))
            {
                printf("%d\t",iCnt);
            }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}

// Output:
// Enter the number
// 18
// 1       3       5       7       9       11      13      15      17