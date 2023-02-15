#include<stdio.h>
#include<conio.h>
int main()

{
    int i,sum=0;
    for(i=30;i<=120;i++)
    {
        if (i%3==0 && i%5==0)
        {
            sum =sum+1;
        }

    }
    printf("Summation:%d\n",sum);
    return 0;
}
