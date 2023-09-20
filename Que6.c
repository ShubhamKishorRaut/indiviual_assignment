/*6. Write a program to print EVEN numbers from 1 to N using a while loop*/
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Even numbers from 1 to N are:\n");
    while(i<=n)
    {
        if(i%2==0)
        {
        printf("%d\n",i);
        }
        i++;
    }
}