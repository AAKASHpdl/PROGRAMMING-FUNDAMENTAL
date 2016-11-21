//student name : Aakash poudel
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float a,b,c;
float are,s;
printf("enter all sides of triangle:\n");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
are= sqrt (s*(s-a)*(s-b)*(s-c));
printf("area of triangle is :%f",are);
getch();
}
