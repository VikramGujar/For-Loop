// Write the logic for the below program in c ?



//                            1

//                   4        9

//            16    25        36   

// 49         64    81       100


#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a=1;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for (row=1; row<=rowNum; row++) {
        for (col= 1;col<=colNum;col++) {
            if (col<=rowNum-row) {
                printf("      "); 
            } else {
                printf("%-6d", a * a); 
                a++;
            }
        }
        printf("\n"); 
    }

}