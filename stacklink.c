#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node*next;
};
struct node*head;

void main()
{
int choice=0;
printf("\n#stack operation usinglinked list#\n");
while(choice!=4)
{
printf("\n1.push\n2.pop\n3.Display\n4.Exit");
printf("\n Enter your choice \n");
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
 case 4:
         printf("Exiting.......");
         break;
 default:
          printf("Please Enter valid choice");
   }
}
};
void push()
{
int val;
struct node*ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("not able to push the element");
}
else
{
printf("Enter the value:");
scanf("%d",&val);
if(head==NULL)
{
ptr->val=val;
ptr->next=NULL;
head=ptr;
}
else
{
ptr->val=val;
ptr->next=head;
head=ptr;
}
printf("Iteam pushed");
}
}
void pop()
{
int iteam;
struct node*ptr;
if(head==NULL)
{
printf("UNDERFLOW");
}
else
{
iteam=head->val;
ptr=head;
head=head->next;
free(ptr);
printf("Iteam popped");
}
}
void display()
{
int i;
struct node*ptr;
ptr=head;
if(ptr==NULL){
printf("Stack is empty\n");
}
else
{
printf("printing stack elements \n");
while(ptr!=NULL)
{
printf("%d\n",ptr->val);
ptr=ptr->next;
}
}
}
