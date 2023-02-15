#include<stdio.h>
#include <conio.h>
int main ()

{
 int a;
int sum =100;

 printf("Enter the value of a=");
 scanf("%d",&a);

 for (a=1;a<=sum; a=a+1)
{

 if (a%5==0)
 {
     printf("Yes");
 }

 else
 {
     printf ("No");
 }
}



 return 0;

}
