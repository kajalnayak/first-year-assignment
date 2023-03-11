#include<stdio.h>
int main()
{
    int r,dia;
    float area,ciru;
    printf("enter the value of radius");
    scanf("%d",&r);
    area=3.141*r*r;
    printf("area of the circle %f \n",area);
    ciru=2*3.141*r;
    printf("circumference of the circle %f \n",ciru);
    dia=2*r;
    printf("diameter of the circle %d \n",dia);
}