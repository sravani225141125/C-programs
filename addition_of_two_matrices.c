#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],i,j,r,c;
    printf("Enter no of rows, columns: ");
    scanf("%d%d",&r,&c);
    printf("Elements of matrix 1: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of matrix 2: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Addition of matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",&a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}