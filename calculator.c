#include <stdio.h>
#include<conio.h>
main()
{
int a,b,c;
int add,sub,div,mul;

printf("enter two numbers::\n");
scanf("%d%d",&a,&b);
add=a+b;
printf("addition of your number is::%d\n",add);
sub=a-b;
printf("subtraction of two number::%s\n",sub);
div=a/b;
printf("division of two numbers is::%d\n",div);
mul=a*b;
printf ("multiplication of two numbers is::%d \n",mul);
c = a% b ;
printf("modlus of two numbers is ::%d",c);
return 0;
}
