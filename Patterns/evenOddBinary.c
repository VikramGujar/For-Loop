// Write a C program to print square pattern program 
 
//   0 1 0 1 0

//   1 0 1 0 1

//   0 1 0 1 0

//   1 0 1 0 1

//   0 1 0 1 0


#include<stdio.h>
int main()
{
    int rowNum,colNum,row,col;
    printf("Enter row and colum numbers :");
    scanf("%d %d",&rowNum,&colNum);

    for(row=1;row<=rowNum;row++)
    {
        for(col=1;col<=colNum;col++)
        {
            if(row%2==0)
            {
                if(col%2==0)
                {
                    printf("0");
                }else
                printf("1");
            }else{
                if(col%2==0)
                {
                    printf("1");
                }else
                printf("0");
            }
            
        }
        printf("\n");
    }
}