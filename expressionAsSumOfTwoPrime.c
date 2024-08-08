// Write a program in C to check whether a number can be expressed as the sum of two prime. 
// Sample Input
// Input as: 16
// Sample Output
// Output :
// 16 = 3 + 13
// 16 = 5 + 11

#include<stdio.h>
int main()
{
    int num,i,j,diviser1,diviser2;
    printf("Enter a number: ");
    scanf("%d",&num);

    for( i=1;i<=num/2;i++)
    {
        for( j=1;j<=num;j++)
        {
            if(i+j==num)
            {
                diviser1=0;diviser2=0;
                for(int k=2;k<=i;k++)
                {
                    if(i%k==0)
                    {
                        diviser1++;
                    }
                }
                for(int k=2;k<=j;k++)
                {
                    if(j%k==0)
                    {
                        diviser2++;
                    }
                }
                if(diviser1==1 && diviser2==1)
                {
                    printf("%d = %d + %d \n",num,i,j);
                }
            }
        }
    }
}