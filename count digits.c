/*
name:Aakash poudel
roll no :1
program:wap to count digit of any number.
lab sheet:18
date:16 jan
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;
    printf("enter the number \n");
    scanf("%d",&n);
    while(n>0)
    {
        n/=10
        count ++;
    }

    printf("the number of counts are %d",count);
    getch();
    return 0;

}
