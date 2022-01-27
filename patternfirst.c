#include<stdio.h>
#include<conio.h>
void main()
{
	int row,col,n;
	printf("enter the line number:");
    scanf("%d",&n);
	for (row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("*");
		}
		printf("\n");
	}
}

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// 	int i,j;
// 	for(i=1;i<=5;i++)
// 	{
// 		for(j=1;j<=i;j++)
// 		{
// 			printf("%c",64+j);
// 		}
// 		printf("\n");
// 	}
// }

// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// 	int i,j;
// 	for(i=5;i>=1;i--)
// 	{
// 		for(j=1;j<=i;j++)
// 		{
// 			printf("%c",64+j);
// 		}
// 		printf("\n");
// 	}
// }


// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// 	int i,j;
// 	for(i=1;i<=5;i++)
// 	{
// 		for(j=1;j<=i;j++)
// 		{
// 			printf("%c",64+i);
// 		}
// 		printf("\n");
// 	}
// }
