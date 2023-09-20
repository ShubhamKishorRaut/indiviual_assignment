/*1. Write a program to find the cube of a number use loop.*/
#include<stdio.h>
int main()
{
    int n,c=1;
    printf("Enter any Number:\n");
    scanf("%d",&n);
    for(int i=1;i<=3;i++)
    {
        c*=n;
    }
    printf("Cube of Number is :%d",c);
}