#include<stdio.h>
int main()
{
    int i,j,k,l,rows;
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(k=1;k<=rows-1;k++)
    {
        for(l=k ;l<=rows-1;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
