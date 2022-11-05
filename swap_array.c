#include <stdio.h>
void main()
{
    int a[50],b[50],n,m,i,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter 1st array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 2st array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
    printf("After swapping,1st array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nAfter swapping,2nd array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
}