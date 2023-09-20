/*7. Write a program in C to read any Month Number in integer and display Month name in
the word.(using switch case).*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any Month Number:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: printf("Month name is January");
                break;

        case 2: printf("Month name is February");
                break;

        case 3: printf("Month name is March");
                break;

        case 4: printf("Month name is April");
                break;

        case 5: printf("Month name is May");
                break;

        case 6: printf("Month name is June");
                break;

        case 7: printf("Month name is July");
                break;

        case 8: printf("Month name is August");
                break;

        case 9: printf("Month name is September");
                break;

        case 10: printf("Month name is Octobar");
                break;

        case 11: printf("Month name is November");
                break;

        case 12: printf("Month name is December");
                break;

        default : printf("Month Number is Wrong");
                break;
    }
}