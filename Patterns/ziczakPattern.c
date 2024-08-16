// Write the logic for thee below pattern in c ?



//    1       2       3 

//    6       5       4

//    7       8       9

//   12      11      10

//   13     14       15 


#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a=1,b=1;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for (row=1;row<=rowNum;row++) {
      
        for (col=1;col<=colNum;col++) {
            if(row%2!=0)
            printf("%3d",a++);
            else
            printf("%3d",--a);
        }
        a+=colNum;
        printf("\n");
       
    }

}