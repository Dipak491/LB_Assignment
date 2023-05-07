//2. Accept single digit number from user and print it into word.

////////////////////////////////////////////////////////////////////////////////
//
//  Function :      Display
//  Input :         Integer
//  Output :        Integer
//  Description :   perform to accept  number from user and print into word.
//  Author :        Dipak Suresh Narkhede
//  Date :          07/05/2023
//
/////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{
    if(iNo==0)
    {
        printf("Zero\n");
    }
    else if(iNo==1)
    {
        printf("One\n");
    }
       else if(iNo==2)
    {
        printf("Two\n");
    }
       else if(iNo==3)
    {
        printf("Three\n");
    }
       else if(iNo==4)
    {
        printf("Four\n");
    }
    else if(iNo==5)
    {
        printf("Five\n");
    }
       else if(iNo==6)
    {
        printf("Six\n");
    }   else if(iNo==7)
    {
        printf("Seven\n");
    }   else if(iNo==8)
    {
        printf("Eight\n");
    }   
    else if(iNo==9)
    {
        printf("Nine\n");
    }
    else{
        printf("Invalid Number\n");
    }
}
int main()
{   
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

// output:
// Enter the number 
// 9
// Nine