#include <stdio.h>
#include<stdlib.h>
#define size 50
 
void insert();
void delete();
void display();
int queue_array[size];
int rear = - 1;
int front = - 1;
void main()
{
    int choice;
    while (choice!=4)
    {
printf("\n Menu\n");
        printf("\n1.insert element to queue \n2.delete element from queue \n3. display all elements of queue \n4.quit \n");
        printf(" \n Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
 
void insert()
{
    int element;
    if (rear == size - 1)
    printf("Queue is OVERFLOW\n");
    else
    {
        if (front == - 1)
        
        front = 0;
        printf("Enter element which is to be inserted: ");
        scanf("%d", &element);
        rear = rear + 1;
        queue_array[rear] = element;
    }
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue is UNDERFLOW we cannot delete an element  \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front==-1 || front > rear)
{
        printf("Queue is empty \n");
}
    else
    {
        printf("Elements of Queue are: \n");
        for (i = front; i <= rear; i++)
            printf("%d \n", queue_array[i]);
        printf("\n");
    }
}
