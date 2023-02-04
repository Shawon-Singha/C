#include<stdio.h>
#include<conio.h>
int main()

{
    int X;
    printf("Enter the value of X:");
    scanf("%d",&X);

    if(X%3==0 && X>=3)
    {
        printf("Yes\n");
    }

    else
    {
        printf("No");
    }

    return 0;

}
