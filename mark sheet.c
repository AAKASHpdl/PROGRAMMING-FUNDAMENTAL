// student name::aakash poudel
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c,d,e,f,g;
float t,ave,p;
printf("enter the marks of seven subject\n");
scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
t=a+b+c+d+e+f+g;
ave=t/2;
p=(t/700)*100;
printf ("total marks is::%f\n",t);
printf("average marks is::%f\n",ave);
printf("percentage of gven merks is::%f\n",p);
getch();
return 0;
}

