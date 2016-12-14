//student name :: aakash poudel
#include<stdio.h>
int main()
{
	int n;
float a,b,sum,sub,mul,div;
printf("***************simple calculator********************\n");
printf ("\n\tchoose form menu below\n");
printf("1:Addition");
printf("\t\t2:subtraction");
printf("\t\t3:multiplicatoion");
printf("\n4:divide\n");
scanf("%d",&n);
switch(n)
{
	case 1:
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	sum=a+b;
	printf (" sum of two numbers is ::%f",sum);
	break;
	
	case 2:
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	sub=a-b;
	printf (" difference of two numbers is ::%f",sub);
	break;
	
	case 3:
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	mul=a*b;
	printf (" sum of two numbers is ::%f",mul);
	break;
	
	case 4:
	printf("enter two numbers");
	scanf("%f%f",&a,&b);
	div=a/b;
	printf (" division of two numbers is ::%f",div);
	break;
	
	
	

	default:
					printf("thank you for visiting");
}
	return 0;
}
