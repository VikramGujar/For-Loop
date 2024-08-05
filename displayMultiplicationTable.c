// Write a program in C to display the multiplication table for a given integer. 
// Test Data :

// Input the number (Table to be calculated) : 15

// Expected Output :

// 15 X 1 = 15

// ...

// ...

// 15 X 10 = 150


#include<stdio.h>
int main()
{
    int num,i;
    printf("Enetr number :");
    scanf("%d",&num);

    for ( i = 0; i<=10; i++)
    {
        printf(" %d X %d is :%d \n",num,i,num*i);
    }
    
}