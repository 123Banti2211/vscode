// SUM OF THE ARRAY
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int n,i,sum=0;
//	printf("Enter array size:");
//	scanf("%d",&n);
//	int a[n];
//	for(i=0;i<n;i++)
//	{
//		printf("Enter %d number:",i+1);
//		scanf("%d",&a[i]);
//		sum+=a[i];
//	}
//	printf("The sum of the Array is %d",sum);
//	return 0;
//}

// COPY ELEMENT ONE TO ANOTHER
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int n,i;
//	printf("Enter array size:");
//	scanf("%d",&n);
//	int a[n];
//	int b[n];
//	for(i=0;i<n;i++)
//	{
//		printf("Enter %d number:",i+1);
//		scanf("%d",&a[i]);
//	}
//	for(i=0;i<n;i++)
//	{
//		b[i]=a[i];	
//	}
//	printf("The original array:");
//	for(i=0;i<n;i++)
//	{
//		printf("\t%d",a[i]);
//	}
//	
//	printf("\nThe copy array:");
//	for(i=0;i<n;i++)
//	{
//		printf("\t%d",b[i]);
//	}
//}

//Multiplication Table
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int i,j,n1,n2;
//	printf("Enter opening range:");
//	scanf("%d",&n1);
//	printf("Enter closing range:");
//	scanf("%d",&n2);
//	for(i=n1;i<=n2;i++)
//	{
//		printf("THE MULTIPLICATON TABLE OF %d NUMBER IS :\n",i);
//		for(j=1;j<=10;j++)
//		{
//			printf("%d*%d=%d\n",i,j,i*j);
//		}
//		printf("\n\n");
//	}
//}

//ODD NUMBER AND SUM
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int n,i,sum=0;
//	printf("Enter a range to check it odd or even:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		if(i%2!=0)
//		{
//			sum+=i;
//		}
//	}
//	printf("The sum of odd number is %d",sum);
//	return 0;
//}

//CUBE OF THE NUMBER
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int n,i;
//	printf("Input Number you want to mak cube:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		 printf(" The Number is:%d and cube of the %d is: %d \n",i,i, (i*i*i));
//	}
//}

//     1 
//    2   3 
// 4   5   6 
//7  8   9  10
//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int i,j,n,k=1,z;
//	printf("Enter the line number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(z=1;z<=n-i;z++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("%d ",k);
//			k++;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int i,j,n,k=1,z;
//	printf("Enter the line number:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(z=1;z<=n-i;z++)
//		{
//			printf(" ");
//		}
//		for(j=1;j<=i;j++)
//		{
//			printf("%d ",i);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<conio.h>
//int main()
//{
//	int i,n,a=9,sum=0;
//	printf("Enter the range:");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//	  sum +=a;
//	  printf("%d\t",a);
//	  a=a*10+9;
//		
//	}
//	printf("\nThe sum of the series = %d \n",sum);
//	return 0;
//}

//Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("Enter the line numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==1&&j%2==1)
			{
				printf("1");
			}
			else if(i%2==0&&j%2==1)
			{
				printf("0");
			}
			else if(i%2==0&&j%2==0)
			{
				printf("1");
			}
			else if(i%2==1&&j%2==0)
			{
				printf("0");
			}
		}
		printf("\n");0
	}
	return 0;
}

