// Write a C program to add all the digits present in a given number until it became a single digit. Develop it by using while loop.

// [if the number is 5678, sum of digit =5+6+7+8=26 , again sum of digit of the sum : 2+6=8] 
// Input as : 5678
// Ouput as : 8

#include<stdio.h>
int main()
{
    int num,duplicate,sum=0,reminder;
    printf("Enter a number to check :");
    scanf("%d",&num);
    for (duplicate=num;num!=0;num/=10)
    {
        for (;duplicate!=0;duplicate/=10)
        {
            reminder=duplicate%10;
            sum=sum+reminder;
        }
        num=sum;
    }
    printf("\n The generic number is %d",num);
}