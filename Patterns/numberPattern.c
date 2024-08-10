// Write a C program to print square pattern program 

//   1 1 2 1 3 1

//   1 2 2 2 3 2

//   1 3 2 3 3 3 

//   1 4 2 4 3 4

//   1 5 2 5 3 5



#include<stdio.h>
int main()
{
    int numRow,numCol,row,col;
    printf("Enter number of rows and column :");
    scanf("%d %d",&numRow,&numCol);

    
    for (row=1;row<=numRow;row++)
    {
        for (col=1;col<=numCol; col++)
        {
            if(col%2==0)
            {
                printf("%3d",row);
            }else
            {
                printf("%3d",(col+1)/2);
            }
        }
        printf("\n");
        
    }
    
}
