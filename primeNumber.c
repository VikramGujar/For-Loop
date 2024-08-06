// Write a C program to check the given number is a prime number or not.
// Input as :
// Enter a number : 13
// Expected Output :
// 13 is a Prime Number.


#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check");
    scanf("%d",&num);

    for (int i=2; i <=num/2; i++)
    {
        if (num%i==0)
        {
            printf("Not a Prime Number");
            return 0;
        }
        
    }
    printf("The number is Prime Number");
    
}