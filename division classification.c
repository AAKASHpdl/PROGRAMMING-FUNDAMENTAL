#include<stdio.h>
#include<conio.h>
main()
{
int p;
printf("enter your percentage\n");
scanf("%d",&p);
if (p>=80)
printf("you have scored a distinction mark");
else if (p>=60)
printf("you have scored first division mark");
else if (p>=50)
printf("you have scored second devision mark");
else if (p<50)
printf ("you have failed");
}
