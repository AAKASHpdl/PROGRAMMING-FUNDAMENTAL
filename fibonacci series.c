// student name:: aakash poudel
#include<stdio.h>
#include<conio.h>
int main()
{
int c=1,f=1,s=1,a=10,m;

 while (c < a)
    {
      m = f + s;
      printf("%d  ", m);
      f = s;
      s = m;
      c++;
    }
    return 0;
}
