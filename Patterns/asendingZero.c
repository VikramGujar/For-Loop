// Write a c program for the following pattern



//    1 2 3 4 5

//    0 3 4 5 6

//    0 0 5 6 7

//    0 0 0 7 8

//    0 0 0 0 9

#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for (row=1;row<=rowNum;row++) 
    {
      
        for (col=1;col<=colNum;col++) 
        {
            if(col<row)
            printf("0 ");
            else
            printf("%d ",col);
        }
        printf("\n");
    }

}