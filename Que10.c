/*10.Write a program to read an integer and print its multiplication table.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Number:\n");
    scanf("%d",&n);
    printf("Multiplication Table of n is:\n");
    for(int i=1;i<=10;i++)
    {
         printf("%d*%d=%d\n",n,i,n*i);
    }
}