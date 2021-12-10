#include<stdio.h>
#include<conio.h>
int main()
{
    int pow,i,base,result=1;
    printf("enter the value of base=");
    scanf("%d",&base);
    printf("enter the value of pow=");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++)
    {

        result=result*base;
    }
    printf("the result is =%d",result);




    getch();
}
