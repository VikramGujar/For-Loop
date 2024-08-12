// Write a C program to print square pattern program 

   

//    5 10 15 20 25

//    4 9  14 19 24

//    3 8  13 18 23

//    2 7  12 17 22

//    1 6  11 16 21

#include<stdio.h>
int main()
{
    int rowNum,colNum,row,col,a;
    printf("Enter row and col numbers :");
    scanf("%d %d",&rowNum,&colNum);
    a = rowNum;
    for(row=1;row<=rowNum;row++)
    {
    
        for(col=a;col<=rowNum*colNum;col+=rowNum)
        {
            printf("%4d",col);
        }
        printf("\n");
        a--;
    } 
    
}