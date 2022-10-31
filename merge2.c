#include<stdio.h>
void main()
{
int a[20],b[20],c[50],m,n,i,j=0,p=0,x=0,y=0;;
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

for(i=n;i<(n+m);i++)
{
 a[i]=b[j];
j++;
}
printf("merged array");
 for(i=0;i<(n+m);i++)
 {
  printf("%d",a[i]);
 }
}
