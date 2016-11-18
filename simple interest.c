#include<stdio.h>
#include<conio.h>
main(){
int p,t,r,si;
printf("enter your principle:\n");
scanf("%d",&p);
printf("enter your time : \n");
scanf("%d",&t);
printf("enter your rate of interest : \n");
scanf("%d",&r);
si = (p*t*r)/100;
printf ("your interest is : %d",si);
getch();

}
