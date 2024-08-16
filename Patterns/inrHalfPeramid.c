// Write the logic for the below program?



// 1 

// 2     6

// 3     7     10

// 4     8     11     13

// 5     9     12     14     15


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