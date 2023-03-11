#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>0)
    {
        printf("the number is positive number");
    }
    if(a<0)
    {
        printf("the number is negetive number");
    }
    if(a==0)
    {
        printf("the number is a zero");
    }
}