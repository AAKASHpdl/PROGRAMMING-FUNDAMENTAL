#include<stdio.h>
#include<math.h>
int main ()
{
float x1,x2;
float a,b,c,dis;
printf("enter the first number:\n");
scanf ("%f",&a);
printf("enter the second number:\n");
scanf("%f",&b);
printf("enter the third number:\n");
scanf("%f",&c);
dis = (b*b)-(4*a*c);
printf("%f",dis);
x1=(-b+pow(dis,0.5))/(2*a);
x2=(-b-pow(dis,0.5))/(2*a);
printf("the first quadratic equation is::%f\n",x1);
printf ("the second quadratic equation is ::\n %f",x2);
return 0;
}
