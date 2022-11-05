#include<stdio.h>
#include<stdlib.h>
int a[50],top,maxsize,i,c,n;

void push()
{
if(top==maxsize-1)
printf("Stack overflow\n");
else
{
  
  top=top+1;
  
  printf("Enter stack element:");
  scanf("%d",&n);
  a[top]=n;
  
}
}
void display()
{
  printf("The stack elements are\n");
  for(i=top;i>=0;i--)
  {
  printf("%d\n",a[i]);
 
  }
}
void pop()
{
int del;
if(top==-1)
printf("Stack underflow\n");
else
{
 del=a[top];
 printf("popped element is %d\n",del);
 
 top--;
}
}

void main()
{
top=-1;
maxsize=5;
while(c!=4)
{
printf("------Menu-------\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display stack\n");
printf("4.Exit\n");
printf("enter choice:");
scanf("%d",&c);
switch(c)
{
 case 1:
   push();
 break;
 case 2:
    pop();
 break;
 case 3:
    display();
 break;
 case 4:
   exit(0);
break;
default:
 printf("wrong choice");
 break;
}
}

}


  

