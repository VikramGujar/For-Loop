
// Write a C program to find all strong numbers between 1 to 500
// factorial sum of digits is equal to that number


#include <stdio.h>
#include<math.h>

int main() 
{
    int num1,num2,rem,m,factorial,i,sum;
    printf("Enter the rage to find strong numbers: ");
    scanf("%d %d",&num1,&num2);

    for(i=num1;i<=num2;i++)
    {
         m=i;
        sum=0;
        for(;m!=0;m/=10)
        {
            rem=m%10;
            for(;rem!=0;rem--){
                factorial*=rem;
            }
            sum+=factorial;
        }
            if(sum==i)
            {
                printf("%d \t",i);
            }
    }
    return 0;
}