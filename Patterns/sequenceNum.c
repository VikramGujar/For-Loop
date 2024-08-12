// Write a C program to print square pattern program 



//   1 6 11 16 21

//    2 7 12 17 22

//    3 8 13 18 23

//    4 9 14 19 24

//    5 10 15 20 25


#include<stdio.h>
int main()
{
    int rowNum,colNum,row,col;
    printf("Enter row and colum numbers :");
    scanf("%d %d",&rowNum,&colNum);

    for(row=1;row<=rowNum;row++)
    {
        for(col=row;col<=colNum*rowNum;col+=rowNum)
        {
            printf("%4d", col);
        }
        printf("\n");
    }

    return 0;
}
