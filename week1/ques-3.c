#include<stdio.h>
int main()
{
    int i,sum=0,remainder;
    printf("enter the number");
    scanf("%d",&i);
    do
    {
        remainder=i%10;
        sum=sum+remainder;
        i=i/10; 
    }
    while(i>0);
    printf("sum %d",sum);
            
}