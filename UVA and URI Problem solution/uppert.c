#include<stdio.h>
int main()
{
    int size,row,colm,i,j,k=0;
    int matrix[100][100];
    printf("enter the size of the matrix\n");
    scanf("%d",&size);
    row=colm=size;
    printf("enter the matrix of row and colm %dx%d\n",size,size);
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
        {
            scanf("%d",&matrix[i][j]);

        }
    }
    printf("the matrix of the upper trangle\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<colm;j++)
           {
               if(i>j)
            printf("%d   ",k);
        else
            printf("%d   ",matrix[i][j]);
            }
             printf("\n");


    }





}
