// Write a C program to print square pattern program 



//   2  4  6   8   10

// 12 14 16 18 20

// 22 24 26 28 30

// 32 34 36 38 40

// 42 44 46 48 50



#include<stdio.h>
int main()
{
    int numRow,numCol,a;
    printf("Enter number of rows and column :");
    scanf("%d %d",&numRow,&numCol);

    a=1;
    for(int row=1;row<=numRow;row++)
    {
        for (int col=1;col<=numCol;col++)
        {
            if(a%2==0)
            {
                printf("%3d",a++);
            }
            a++;
        }
        printf("\n");
        
    }
}
