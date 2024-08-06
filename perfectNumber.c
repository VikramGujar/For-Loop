// Write a C program to check the given number is perfect number or not. 
// A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself). 
// Input as :

// Enter a number :28

// Output as :

// 28 is a Perfect Number
#include<stdio.h>
int main()
{
    int num,checkNum=0,orignal;
    printf("Enetr a number: ");
    scanf("%d",&num);
    orignal=num;

    for(;num!=0;)
    {
        if(orignal%num==0){
            checkNum = checkNum+num;
        }
        num--;
    }
    checkNum = checkNum-orignal;
    if(checkNum==orignal)
    {
        printf("Perfect Number");
    }else{
        printf("Not Perfect number");
    }
    
    
}