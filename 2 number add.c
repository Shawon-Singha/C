#include<stdio.h>
#include<conio.h>
int main ()

{
   double num1, num2,v,w,x,y;
    printf("Enter a number:\n");
    scanf("%lf", &num1);

    printf("Enter the another number:\n");
    scanf("%lf", &num2);

     v= num1+num2;
     w= num1-num2;
      x=num1*num2;
      y= num1 / num2;


    printf("%lf\n",v);
    printf("%lf\n",w);
    printf("%lf\n",x);
    printf("%lf\n",y);

    return 0;
}
