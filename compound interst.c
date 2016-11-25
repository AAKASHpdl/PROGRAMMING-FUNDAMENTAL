#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
{
float p,t,r,ci=0,x=0;
printf ("enter the value of principle\n");
scanf("%f",&p);
printf("enter the time\n");
scanf("%f",&t);
printf("enter the rate:\n");
scanf("%f",&r);
x=1+r/100;
ci=(p*pow(x,t)-1);
printf("your compound interest is::%f",ci);
return 0;
}
