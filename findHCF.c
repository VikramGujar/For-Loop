// Write a C program that calculates the Highest Common Factor (HCF) of two numbers using for loops
// input as :

// Enter two numbers: 8 12

// The HCF of 8 and 12 is 4


#include<stdio.h>
int main()
{
    int num1,num2,max,hcf;
    printf("Enetr two integer numbers: ");
    scanf("%d %d",&num1,&num2);
    max =(num1>num2)?num1:num2;

    for (int i=1; i<=max/2; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("The HCF of %d and %d is %d",num1,num2,hcf);
    
}