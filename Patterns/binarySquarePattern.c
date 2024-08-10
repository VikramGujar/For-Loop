// Write a C program to print square pattern program 

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1

// 1 0 1 0 1





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
            if(col%2==0)
            {
                printf("0");
            }else{
                printf("1");
            }
        }
          printf("\n");
    }


}
