// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :

// Input the number of terms : 5


// Expected Output :

// 1 + 11 + 111 + 1111 + 11111

// The Sum is : 12345


#include<stdio.h>
int main()
{
    int num,sum=1,inr=1;
    printf("Enetr number :");
    scanf("%d",&num);

    for (int i= 1;i<=num; i++)
    {
        
        printf("%8d",inr);
         
         inr= inr*10+1;
         sum=sum+inr*10+1;
    }
       printf("\n The Sum is : %d",sum);
    
}