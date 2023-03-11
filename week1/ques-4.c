#include<stdio.h>
int main()
{
    int op;
    float a,b,sum,subtraction,multiplication,division;
    printf("enter the two numbers");
    scanf("%f %f",&a,&b);
    printf("1=sum  2=subtraction 3= multiplication  4 = division");
    printf("enter yourchoice \n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        {
            sum=a+b;
            printf("%f+%f=%f \n",a,b,sum);
            break;
        }
        case 2:
        {
            subtraction=a-b;
            printf("%f-%f=%f \n",a,b,subtraction);
            break;
        }
        case3:
        {
            multiplication=a*b;
            printf("%f*%f=%f\n",a,b,multiplication);
            break;
        }
        case 4:
        {
            division=a/b;
            printf("%f/%f=%f \n",a,b,division);
            break;
        }
        defult:
        {
            ("you have entered wrong choice");
            break;
        }
    }
}