/*4. Write a program to compare two no by using the ternary operator in c.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any Two Numbers:\n");
    scanf("%d%d",&a,&b);
    (a>b)?printf("a is greater than b"):printf("b is greater than a");
}