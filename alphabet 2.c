//student name::aakash poudel
#include<stdio.h>
int main()
{
	char a;
int ASCII;
printf("ENTER A ALPHABET ");
scanf("%c",&a);
ASCII=a;
if (ASCII>65&&ASCII<122)
{
	printf (" you entrerd a alphabet");
}
else 
{
	printf("it is not a alphabet");
}
return 0;
} 
