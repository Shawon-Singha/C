#include<stdio.h>
int main()
{
    int i,j,k,l,rows;
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        printf("*");
    }
    printf("\n");
    for(j=1;j<=3;j++)
    {
        printf("*");
        for(k=1;k<=3;k++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(l=1;l<=rows;l++)
    {
        printf("*");
    }

    return 0;
}
