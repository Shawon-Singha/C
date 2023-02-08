#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,rows;
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(l=rows;l>=1;l--)
    {
        for(m=1;m<=rows-l;m++)
        {
            printf(" ");
        }
        for(n=1;n<=l;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
