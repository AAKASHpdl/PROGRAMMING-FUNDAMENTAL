
#include<stdio.h>
struct addition

{
	int first;
	int second;
	
};
int main()
{
int result;
struct addition add;
printf ("enter the number");
scanf("%d",&add.first);
printf ("enter the second number");
scanf("%d",&add.second);
result=add.first+add.second;
printf("the sum of first and second number is ::%d",result);
return 0;
}
