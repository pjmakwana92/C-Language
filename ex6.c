//write a program to check which is first triangle  biger ?
#include<stdio.h>
void main()
{
    float a1,a2,h1,h2,b1,b2;
    printf("Enter value of first triangle's hight = ");
    scanf("%f",&h1);
    printf("Enter value of first triangle's base = ");
    scanf("%f",&b1);
    a1=(h1*b1)/2;
    printf("Enter value of first triangle's area = %.2f \n",a1);
    printf("------------------------------------------------------\n");
    printf("Enter value of second triangle's hight = ");
    scanf("%f",&h2);
    printf("Enter value of second triangle's base = ");
    scanf("%f",&b2);
    a2=(h2*b2)/2;
    printf("Enter value of second triangle's area = %.2f \n",a2);
    if (a1>a2)
    {
        printf("First triangle is biger\n");
    }
    printf("Good Bye");

}