#include<stdio.h>
#include<stdlib.h>
int stack[100],choice;
int n,top,x,i;
void push();
void pop();
void display();
int main()
{
top=-1;
printf("\n Enter the size of stack[max=100]:");
scanf("%d",&n);
printf("\n \t stack operations using Array");
printf("\n \t                 ");
printf("\n \t 1.push \n \t 2.pop \n \t 3.Display \n \t 4.Exit \n \t");
do
{
printf("Enter your choice");
scanf("%d",&choice);
switch(choice)
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

case 4:printf("exit");
        break;
      
     
default:printf("Invalid");
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n stack is over flow");
}
else
{
printf("Enter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
printf("element=%d ",x);
}
}
void pop()
{
if(top<=-1)
{
printf("\n \t stack is under flow");
}
else
{
printf("\n \t The popped elements is %d",stack [top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("/n The Elements in stack \n");
for(i=top;i>=0;i--)
printf("\n %d",stack[i]);
printf("\n press next choice");
}
else
{
printf("stack is empty");
}
}

