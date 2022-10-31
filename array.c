#include<stdio.h>
void main()
{
 int a[10],i,n;
 printf("Enter the array size\n");
 scanf("%d",&n);
 printf("Enter the array elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("the array elements are\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
}
