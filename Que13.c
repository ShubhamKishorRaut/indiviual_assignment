/*13.Write a program by using switch case if user enter 11 it will have are area of
circle and when user enter 22 it will have area of rectangle and when user enter
33 it will give area of square when user enter 44 it will give area of triangle.*/

#include<stdio.h>
int main()
{
    int n,r,d,l,b,h;
    float e,a;
    printf("Enter the case number:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 11:
                // int r;float a;
                printf("Enter the Radius of circle:\n");
                scanf("%d",&r);
                a=3.14*r*r;
                printf("Area of Circle is :%.2f",a);
                break;
        case 22:
                // int l,b,a;
                printf("Enter the lenght and breadth:\n");
                scanf("%d%d",&l,&b);
                d=l*b;
                printf("Area of Rectangle is :%d",d);
                break;

        case 33:
                // int l,h;float a;
                printf("Enter the Length and Height:\n");
                scanf("%d%d",&l,&h);
                e=(l*h)/2;
                printf("Area of Tringle is :%.2f",e);
                break;

        default:printf("Entered Case number is Wrong");
    }
}
