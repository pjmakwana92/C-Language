//write a program to calculate income , tack monthly income and check yearly income greeter then 5 lakh 5% .
#include<stdio.h>
void main()
{
    int m_sal;
    float y_sal=0.0, t=0.0;
    printf("Enter your monthly salary = ");
    scanf("%d",&m_sal);

    printf("your monthly salary is %d \n",m_sal);
    y_sal=(12*m_sal);
    if (y_sal>500000)
    {
        printf("your yearly salary is greeter than 5 lakh \n");
        t=y_sal*0.05;
        y_sal=y_sal-t;
    }
    printf("your salary is %.2f \n",y_sal);
}