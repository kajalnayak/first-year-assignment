#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0 && i%5!=0)
        {
            printf("fizz\n");
        }
        else if (i%5==0 && i%3!=0)
        {
            printf("buzz\n");
        }
        else if(i%5==0 && i%3==0)
        {
            printf("fizz Buzz\n");
        }
        else
        {
            printf("%d",i);
            printf("\n");
        }
    }
}