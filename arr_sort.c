
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
 
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
   if(a[i]>a[j])
   {
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
   }
}

 
 }
 printf("Array after sorting\n");
 for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
}