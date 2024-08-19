// Write the logic for the below program?



// 1 

// 2     6

// 3     7     10

// 4     8     11     13

// 5     9     12     14     15


#include<stdio.h>
void main()
{
    int r=5,c=0,a=1,i=0,j=0,k=0;

    for(i=1;i<=r;i++)
    {
        for(j=1,k=r-1,a=i;j<=i;j++,k--)
        {
            printf("%d ",a);
            a=a+k;
        }
        printf("\n");
    }
}