// Write a C program to find all Armstrong numbers between 100 to 999.
// Sample Input
// 153
// Sample Output
// 153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.


#include <stdio.h>
#include<math.h>

int main() 
{
    int num1,num2,rem,m,sum,i;
    printf("Enter the rage to find Armstrong numbers: ");
    scanf("%d %d",&num1,&num2);

    for(i=num1;i<=num2;i++)
    {
         m=i;
        sum=0;
        for(;m!=0;m/=10)
        {
            rem=m%10;
            sum+=rem*rem*rem;
        }
            if(sum==i)
            {
                printf("%d \t",i);
            }
    }
    return 0;
}