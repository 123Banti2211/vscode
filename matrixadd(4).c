#include<stdio.h>
#include<conio.h>
int a[100][100], s[100][100];
void main()
{
    int row1,col1;
    printf("ENTER THE ROW NUMBER:");
    scanf("%d",& row1);
    printf("ENTER THE COL NUMBER:");
    scanf("%d",& col1);
    int a[row1][col1];
    matrix(a,row1,col1);
    matrix(a,row1,col1);
    matrix(a,row1,col1);
    matrix(a,row1,col1);
}
void matrix (int a[10][10], int row,int col)
{
    int i,j;
    a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("enter @ %d , %d :\t",i,j);
            scanf("%d",a[i][j]);
        }
        printf("\n");
    }
}
printfun(int a[10][10],int row ,int col)
{
    int i,j;
    a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

}
