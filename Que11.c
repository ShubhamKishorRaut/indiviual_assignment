/*11.Write a program to Calculate Product of Digits of a Number*/
#include<stdio.h>
int main()
{
    int n,p=1,r;
    printf("Enter any Number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        p*=r;
        n=n/10;
    }
    printf("Product of Digit of a Number is:%d\n",p);
}