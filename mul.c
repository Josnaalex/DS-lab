#include<stdio.h>
float mul();
void main()
{
  float m;
  m=mul();
  printf("The product is %f",m);
}
float mul()
{
 float a,b,m;
 printf("enter 2 no:");
 scanf("%f%f",&a,&b);
 m=a*b;
 return m;
}
