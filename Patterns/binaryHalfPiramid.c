// Write a logic for the following pattern in c?



//     0

//     1 0

//     0 1 0

//     1 0 1 0

//     0 1 0 1 0 

#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a=1;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for(row=1;row<=rowNum;row++)
    {
     if(row%2==0)
     a=0;  
        for (col=1;col<=colNum;col++)
        {
            if(row>col){
                printf("%3d",a);
            a= 1-a;
            }else
            printf(" ");
            
        }
        printf("\n");
        
    }
}