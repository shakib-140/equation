#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,x1,x2;
    printf("enter the value of a=");
    scanf("%f",&a);
    printf("enter the value of b=");
    scanf("%f",&b);
    printf("enter the value of c=");
    scanf("%f",&c);

    x1=(-b+(b*b-4*a*c))/2*a;
    x2=(-b-(b*b-4*a*c))/2*a;
    printf("the value of x1=%f\n",x1);
    printf("the value of x2=%f",x2);



    getch();
}
