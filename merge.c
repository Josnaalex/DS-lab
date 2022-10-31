#include<stdio.h>
void main()
{
int a[20],b[20],c[50],m,n,i,j;
printf("enter the size of 1st array");
scanf("%d",&n);
printf("Enter the array elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
printf("enter the size of 2nd array");
scanf("%d",&m);
printf("Enter the array elements");
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
 }
for(i=0,j=0;i<n||j<n;i=i+2,j++)
{
c[i]=a[j];
c[i+1]=b[j];
}
for(i=0;i<(n+m);i++)
{
 printf("%d",c[i]);
}
}
