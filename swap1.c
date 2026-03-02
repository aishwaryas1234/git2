#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping:%d,%d\n",a,b);
printf("Saved");
printf("Saved1");
}

