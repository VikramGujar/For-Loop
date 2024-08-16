// Write the logic for the below program in c?



// 1

// 1  2   1

// 1  2   3   2   1

// 1  2   3   4   3   2   1

// 1  2   3   4   5   4   3   2   1




#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a,b,c;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for (row=1;row<=rowNum;row++) {
        a=0;
        b=1;
        for (col=1;col<=colNum;col++) {
            printf("%d",col);
        }

    }

}