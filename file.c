// #include<stdio.h>
// void main()
// {
//     int i;
//     FILE * fp;
//     // char s[]="Hellow students";
//     char s[100];
//     fp=fopen("f1.txt","w");
//     if(fp==NULL)
//     {
//         printf("File cannot open");
//         exit(1);
//     }
//     printf("enter a string");
//     gets(s);
//     for(i=0;i<strlen(s);i++)
//     {
//         fputc(s[i],fp);
//     }
//     fclose(fp);
// }


#include<stdio.h>
void main()
{
    FILE * fp;
    if(fp==NULL)
    {
        printf("File not found");
    }
}