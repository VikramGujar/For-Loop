// Write a C program that calculates the sum of a factorial series up to a given number of terms.
// Enter the number of terms in the factorial series: 5
// The sum of the factorial series up to 5 terms is: 153


#include<stdio.h>
int main()
{
    int num,sum=0,factorial=1,duplicate;
    printf("Enter a number to check: ");
    scanf("%d",&num);
   
    for (;num;)
    {
         duplicate=num;
         factorial=1;
        for (;duplicate;)
        {
            factorial=factorial*duplicate;
            duplicate--;
        }
        sum+=factorial;
        num--;
    }
    printf("\n The sum of the factorial series is : %d",sum);
}