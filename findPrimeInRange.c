// Write a program in C to find the prime Numbers Between the given range 100 to 999

#include<stdio.h>
int main()
{
    int n1,n2,diviser;
    printf("Enter the rage to find prime numbers");
    scanf("%d %d",&n1,&n2);
    printf("\n Prime Numbers are = ");
    for(n1;n1<=n2;n1++)
    {
        diviser=0;
        for(int i=2;i<n1;i++)
        {
            
            if(n1%i==0)
            {
                diviser++;
            }
        }
         if(diviser==0)
            {
                printf("%4d",n1);
            }
    }
}