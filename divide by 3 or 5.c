#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,n;
    printf ("Enter the value of n");
    scanf("%d",&n);
    for (a=1; a<=n;a++ )

    if ((a%3==0) && (a%5==0))
    {
        printf("%d\n");
    }



    return 0;
}

