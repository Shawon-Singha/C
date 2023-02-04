#include<stdio.h>

int main(){
int m[10],n,i;

scanf("%d",&n);
for(i=0;n>0;i++)
{
m[i]=n%2;
n=n/2;
}

for(i=i-1;i>=0;i--)
{
printf("%d",m[i]);
}
return 0;
}
