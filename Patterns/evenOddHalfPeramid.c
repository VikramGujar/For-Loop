// Write the logic for the below program ?



//                        1

//               2       4

//       3      6        9

// 4    8      12        16



#include<stdio.h>
int main()
{
    int row,col,rowNum,colNum,a=1,b=2;
    printf("Enter number of row and column :");
    scanf("%d %d",&rowNum,&colNum);

    for (row=1;row<=rowNum;row++) {
      
        for (col=1;col<=colNum;col++) {
           if (col<=rowNum-row)
            printf("      ");
            else if(row%2!=0){
                printf("%-6d",a++);
                ++a;
            }else{
                printf("%-6d",b++);
                ++b;
            }
            
        }
        printf("\n");
    }

}