/*8. Write a program to find second largest number in an array.*/
#include<stdio.h>
int main()
{
    int a[5],max,i=0;
    printf("Enter Array Elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    // for(int j=1;j<5;j++)
    // {
    //     if(a[j]>max)
    //     {
    //         max=a[j];

    //     }
    // }
    printf("Max:\n",max);

}