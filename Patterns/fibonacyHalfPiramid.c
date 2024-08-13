// Write a logic for the following pattern in c?



//     1

//     1  2

//     3  5  8

//     13 21 34 55



#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a=1,b=1,c;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for (row=1;row<=rowNum;row++) {
        for (col=1;col<=colNum;col++) {
            if(row>col)
            {
            printf("%d ", a);
            c = a + b;  
            a = b;
            b = c;
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
