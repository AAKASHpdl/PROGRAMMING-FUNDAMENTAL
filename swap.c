//student name :: aakash poudel
#include<stdio.h>
int main()
{
int a,b,temp;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("before swap %d %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after swapthe number are swaped::%d\n%d\n",a,b);
return 0;
}
