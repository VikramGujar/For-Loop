// Write a C program to print square pattern program 

// 1  2   3    4    5 

// 2  4   6    8   10

// 3  6   9   12   15

// 4  8   12  16   20

// 5  10  15  20   25


#include<stdio.h>
int main()
{
    int rowNum,colNum,row,col;
    printf("Enter row and colum numbers :");
    scanf("%d %d",&rowNum,&colNum);

    for(row=1;row<=rowNum;row++)
    {
        for(col=1;col<=colNum;col++)
        {
            printf("%4d",row*col);
        }
        printf("\n");
    }
}