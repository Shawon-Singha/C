#include <stdio.h>
#include <conio.h>
int main()

{
int A,B,C;
printf("Enter the value of A,B,C:");
scanf("%d%d%d",&A,&B,&C);

if((A>B) && (A>C))
{
printf ("A");
}
else if((B>A) && (B>C))
{
printf("B");
}

else
{
printf("C");

}



return 0;
}
