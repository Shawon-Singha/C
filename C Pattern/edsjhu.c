#include<stdio.h>
#int main()
{
    int i,j,k,l,m,n,rows,arry;
    scanf("%d%d",&rows,&arry);


    for(l=1;l<=arry;l++)
    {
        for(m=1;m<=arry-l;m++)
        {
            printf(" ");
        }
        for(n=1;n<=2*l-1;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
