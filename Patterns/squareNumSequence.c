// Write a C program to print square pattern program  

// 1 2 3 4 5 

// 1 2 3 4 5 

// 1 2 3 4 5

// 1 2 3 4 5

// 1 2 3 4 5



#include<stdio.h>
int main()
{
    int numRow,numCol;
    printf("Enter number of rows and column :");
    scanf("%d %d",&numRow,&numCol);

    for(int row=1;row<=numRow;row++)
    {
        for(int col=1;col<=numCol;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

}
