#include<stdio.h>
void main()
{
 int a[10],i,j,n,temp;
 printf("Enter the array size\n");
 scanf("%d",&n);
 printf("Enter the array elements");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 
 for(j=0;j<n;j++)
 {
 for(i=0;i<n;i++)
 {
   if(a[i]>a[i+1])
   {
     temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;
   }
}

 
 }
 printf("Array after sorting\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
}
