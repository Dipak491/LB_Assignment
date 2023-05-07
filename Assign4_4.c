
//Write a program which accept three number and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    if(iNo1 == 0 && iNo2 ==0 && iNo3 == 0)
    {
        return 0;;
    }
    if(iNo1 ==0)
    {
        iNo1 =1;
    }
    if(iNo2 ==0)
    {
        iNo2 =1;
    }
    if(iNo3 ==0)
    {
        iNo3 =1;
    }
    iMul = (iNo1 * iNo2 * iNo3);

    return iMul;
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 =0;
    int iValue3 =0;
    int iRet =0;
    
    printf("Enter the three numbers \n");\
    scanf("%d %d %d",&iValue1, &iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("The multiplication %d",iRet);
    return 0;

}