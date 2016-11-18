#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi=3.14

int main()
{
float r,a,c,;
printf("enter the radius of circle: \n");
scanf("%f",&r);
a= pi*pow(r,2);
c=2*pi*r;
printf("area of circle:%f\n",a);
printf("circumference of circle is : %f \n",c);
getch();
}
