//student name ::Aakash poudel
#include<stdio.h>
int main ()
{
	int a;
printf("enter the year\n");
scanf("%d",&a);
((a%4==0)&&(a%100!=0)||(a%400==0))?printf("this year is leap year"):printf("this year is not a leap year");

return 0;
} 
