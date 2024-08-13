// Write a logic for the following pattern in c?



//     1

//     2  3

//     3  4  5

//     4  5  6  7

//     5  6  7  8  9

#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a=1;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for(row=1;row<=rowNum;row++)
    {
       
        for (col=1;col<=colNum;col++)
        {
            if(row>col)
            printf("%3d",a);
            else
            printf(" ");
            a++;
        }
        printf("\n");
        a=row;
    }
}