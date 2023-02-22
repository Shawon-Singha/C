#include <stdio.h>
#include <conio.h>
int main ()
{
    int y;
    printf("Enter the value of Y :");
    scanf("%d", &y);

if(y%400==0)
{
    printf("Leap Year");
}
else if((y%100!=0)&& (y%4==0))
{
    printf("Leap Year");
}
else
{
    printf("Common Year");
}
     return 0;
}
