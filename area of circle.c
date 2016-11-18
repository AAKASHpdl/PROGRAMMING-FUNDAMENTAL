#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float r,a,c;
printf("enter the radius of circle: \n");
scanf("%f",&r);
a= 3.14*(r*r);
c=2*3.1415*r;
printf("area of circle:%f\n",a);
printf("circumference of circle is : %f \n",c);
getch();
}
