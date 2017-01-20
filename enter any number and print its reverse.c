/*
Student name: Aakash poudel
Subject: Computer Fundamentals
Roll no:1
Program : Write a program to enter any number and print its reverse
Lab Sheet No:15
Date: 13th jan,2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,rem=0,rev=0;
    printf("Enter the number\n");
    scanf("%d",&i);
    n=i;
    while(i>0)
    {
        rem=i%10;
        rev=rev*10+rem;
        i=i/10;

    }
    printf("The reverse of the number is %d\n",rev);
    if(n==rev)
        {
             printf("Number is pallindrome");

    }
    else
        {
            printf("Number is not pallindrome");
    }
    getch();
    return 0;

}
