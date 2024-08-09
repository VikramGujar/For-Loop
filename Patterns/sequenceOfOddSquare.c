// Write a C program to print square pattern program 

//    1   3   5   7  9 

//   11 13 15 17 19

//   21 23 25 27 29

//   31 33 35 37 39



#include<stdio.h>
int main()
{
    int numRow,numCol,a;
    printf("Enter number of rows and column :");
    scanf("%d %d",&numRow,&numCol);
    a=1;
    for (int row=1; row<=numRow;row++)
    {
        for(int col=1;col<=numCol;col++)
        {
            if(a%2!=0)
            {
                printf("%3d",a++);
            }
            a++;
            
        }
        printf("\n");
    }
    

}
