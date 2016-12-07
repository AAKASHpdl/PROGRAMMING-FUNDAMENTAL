#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter three numbers::a::b::c::\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b&&a>c)
printf("a  is the greatest number");
else if (b>a&&b>c)
printf ("b is the greatest number");
else if(c)
printf("c is the greatest number");
}
