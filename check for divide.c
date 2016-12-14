//student name :: aakash poudel
#include<stdio.h>
int main()
{
int n;
printf("enter a number to check the number is completely divisible or not");
scanf("%d",&n);
if(n%5==0&&n%11==0)
{
printf("entered number is completely divisible by 11 and 5");
}
else
{
	printf("entered number is not completely divisible by 11 and 5");
}
return 0;
}

