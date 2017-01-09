//student name ::Aakash poudel
#include<stdio.h>
int main ()
{
	int n;
	char a;

printf("enter the alphabet\n");
scanf("%c",&a);
n=a;
((n>=65 && n<=90)||(n>=97&&n<=122))?printf("you entered the alphabet"):printf("you didn't entered the alphabet");
return 0;
}
