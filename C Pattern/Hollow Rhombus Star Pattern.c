#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,rows;
    scanf("%d",&rows);

    for(i=1; i<=1; i++)
    {
        for(m=1;m<= rows - 1;m++)
        {
           printf(" ");
        }
        for(n=1;n<=rows;n++)
           {
                 printf("*");
           }


    }
    printf("\n");
    for(j=1;j<=3;j++)
    {
        printf("*");

        for(k=1; k<= rows - i;k++)
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
