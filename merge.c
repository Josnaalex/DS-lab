#include<stdio.h>
void main()
{
int a[20],b[20],c[50],m,n,i,j;
printf("enter array size:");
scanf("%d",&n);
printf("Enter 1st array elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

printf("Enter 2nd array elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&b[i]);
 }
for(i=0,j=0;i<n||j<n;i=i+2,j++)
{
c[i]=a[j];
c[i+1]=b[j];
}
for(i=0;i<(n+n);i++)
{
 printf("%d",c[i]);
}
}
