#include<stdio.h>
float mul(float,float);
float m,a,b;
void main()
{
 float m,a,b;
 printf("enter 2 no:");
 scanf("%f%f",&a,&b);
  
  m=mul(a,b);
  printf("The product is %f",m);
}
float mul(float a,float b)
{
 
 
 m=a*b;
 return m;
}
