//write a program to accept input from user and print that name

#include<stdio.h>



/////////////////////////////////////////////////////////////////////////////////
//
//  
//  Input :         String
//  Output :        String
//  Description :   accept input from user and print that name
//  Author :        Dipak Suresh Narkhede
//  Date :          06/05/2023
//
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Name[50];
    printf("Please enter full name: ");
    scanf("%s",&Name);

    printf("Your name is %s",Name);

    return 0;
    
}

// output:
// Please enter full name: Dipak_Narkhede
// Your name is Dipak_Narkhede