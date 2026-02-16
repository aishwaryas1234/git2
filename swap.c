#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,temp;
printf("Enter a:");
scanf("%d",a);
printf("Enter b:");
scanf("%d",b);
temp=a;
a=b;
b=temp;
printf("After swapping:%d,%d\n",a,b);
}
