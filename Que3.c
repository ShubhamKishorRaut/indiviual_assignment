/*3. Write a program to Print Prime Numbers between Two numbers.*/
#include<stdio.h>
int main()
{
    int a,b,count=0,c;
    printf("Enter any Two Number For Range:\n");
    scanf("%d%d",&a,&b);
    printf("Prime Number Range is:\n");
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<=b;j++)
        {
         if(i%j==0)
         {
            break;
         }
          printf("%d\n",i);
        }
    }
}