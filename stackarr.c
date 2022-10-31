#include<stdio.h>
#include<stdlib.h>
int a[50],top,maxsize,i,c,n;
void push();
void pop();
void display();
void main()
{
top=-1;
maxsize=5;
while(c!=4)
{
printf("1.push\n");
printf("2.pop\n");
printf("3.display stack\n");
printf("enter choice");
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
void push()
{
if(top==maxsize-1)
printf("Stack overflow");
else
{
  
  top=top+1;
  
  printf("Enter stack element");
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
printf("Stack underflow");
else
{
 del=a[top];
 printf("popped element is %d\n",del);
 
 top--;
}
}



  

