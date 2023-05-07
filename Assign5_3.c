
//3. Write a program which accept number from user and print its numbers line.

/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         Integer
//  Output :        Integer
//  Description :   perform to accept  number from user and print its numbers line.
//  Author :        Dipak Suresh Narkhede
//  Date :          07/05/2023
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt =-iNo; iCnt <=iNo; iCnt++) // (0=-4; 0<=4;0++)
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

// output:
// Enter the number 
// 4
// -4      -3      -2      -1      0       1       2       3       4