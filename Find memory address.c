#include<stdio.h>
int main(){
int a=4;
int*ip;
ip=&a;


printf("Memory address of variable is:%x\n",&a);
printf("Memory address of variable is:%x\n",ip);
return 0;

}
