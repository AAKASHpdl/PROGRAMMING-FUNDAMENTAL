//student name :: aakash poudel
#include<stdio.h>
int main()
{
int a,b;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("Before swap first number is  %d and second number is %d\n",a,b);
a=a-b;
b=a+b;
a=b-a;
printf("After swap first number is %d and second number is %d \n",a,b);
return 0;
}
