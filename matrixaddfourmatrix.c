#include<stdio.h>
#include<conio.h>
int a[100][100], s[100][100],b[100][100],c[100][100],d[100][100];
void main()
{
    int row1,col1;
    printf("ENTER THE ROW NUMBER:");
    scanf("%d",& row1);
    printf("ENTER THE COL NUMBER:");
    scanf("%d",& col1);
    int a[row1][col1];
    matrix(a,row1,col1);
    matrix(b,row1,col1);
    matrix(c,row1,col1);
    matrix(d,row1,col1);
    add(a,s,row1,col1);
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
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printfun(a,row,col);
}
printfun(int a[10][10],int row ,int col)
{
    int i,j;
    a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

}
void add(int s[10][10],int row,int col,int a[10][10])
{
   int i,j;
    s[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    } 
}
