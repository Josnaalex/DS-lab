#include<stdio.h>
#include<stdlib.h>
int a[50],front,rear,maxsize,i,c,n;
void enqueue();
void dequeue();
void display();
void main()
{
rear=-1;
front=-1;
maxsize=5;
while(c!=4)
{
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.display stack\n");
printf("4.Exit\n");
printf("enter choice");
scanf("%d",&c);
switch(c)
{
 case 1:
   enqueue();
 break;
 case 2:
    dequeue();
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
void enqueue()
{
if(rear==maxsize-1)
printf("Queue overflow");
else
{
  if(front==-1)
  front=front+1;
  printf("Enter queue element");
  scanf("%d",&n);
  rear=rear+1;
  a[rear]=n;
  
}
}
void display()
{
  printf("The queue elements are\n");
  for(i=front;i<=rear;i++)
  {
  printf("%d\n",a[i]);
 
  }
}
void dequeue()
{
int del;
if(front==-1||front>rear)
printf("Queue underflow");
else
{
 del=a[front];
 printf("Deleted element is %d\n",del);
 
 front++;
}
}



  

