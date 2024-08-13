// Write a logic for the following pattern in c?



//     0

//     0 1 

//     0 1 1

//     0 1 1 2

//     0 1 1 2 3


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
