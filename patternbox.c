#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;
    printf("ENTER LINE NUMBERS:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i==j)||(i+j==n+1))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}





// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int i,j,n;
//     printf("ENTER THE LINE NUMBER:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             if((i==1||i==n || j==1||j==n) || (i==j))
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
    
// }