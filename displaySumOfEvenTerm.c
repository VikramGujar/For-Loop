// Write a C program to display the sum of n terms of even natural numbers.
// Test Data :

// Input number of terms : 5

// Expected Output :

// The even numbers are :2 4 6 8 10

// The Sum of even Natural Number upto 5 terms : 30

#include<stdio.h>
int main()
{
    int num,i,sum;
    printf("Enetr number :");
    scanf("%d",&num);

    printf("The even numbers are :");
    for ( i = 0; i<=num*2; i++)
    {
        if(i%2==0){
            printf("%5d",i,sum+=i);
        }
        
        
    }
    printf("\n The Sum of even Natural Number upto %d terms :%d",num,sum);
}