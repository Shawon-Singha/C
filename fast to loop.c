#include<stdio.h>
int main()
{
    int a,b,sum,i;
    printf("Enter the value of a,b:\n");
    scanf("%d%d",&a,&b);

    float c,d,yo,add;
    printf("Enter the value of c,d,:");
    scanf("%f%f",&c,&d);

    char ch;
    printf("Enter the value of ch:\n");
    scanf("%c",&ch);

    sum = a+b;
    printf("Sum = %d\n",sum);

    add = c+d;
    printf("Another value:%.2f",add);

    yo = add/2;
    printf("Find the remainder:%f\n",yo);

    if(a%2==0)
    {
        printf("The number is EVEN.\n");
    }
    else
    {
          printf("The number is ODD.\n");
    }

    if((ch=='a') || (ch='e') || (ch='i') || (ch='o') || (ch='u'))
    {
        printf("The alphabet is vowel.\n");
    }
      else
      {
          printf("The alphabet is consonant.\n");
      }



      for(i= 1;i<=a;i++)
      {
          printf("%d\n",i);
      }

      i = 1;
      while(i<=b)
      {
          printf("%d\n",i);
          i++;
      }

      i = 1;
      do
      {
          printf("%d\n",i);
          i++;
      }
      while(i<=a);


    return 0;
}
