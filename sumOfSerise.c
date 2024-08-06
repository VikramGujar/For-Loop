// Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Test Data :

// Input the number of terms : 5


// Expected Output :

// 1 + 11 + 111 + 1111 + 11111

// The Sum is : 12345


#include<stdio.h>

int main()
{
    int num, sum = 0, inr = 0;
    printf("Input the number of terms : ");
    scanf("%d", &num);

    printf("Series: ");
    for (int i = 1; i <= num; i++)
    {
        inr = inr * 10 + 1;  
        sum += inr;  
        
        
        if (i == num)
            printf("%d", inr);
        else
            printf("%d + ", inr);
    }
    
    printf("\nThe Sum is : %d\n", sum);
    
    return 0;
}
