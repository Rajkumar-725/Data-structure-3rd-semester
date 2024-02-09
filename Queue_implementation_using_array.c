//*****************************QUEUE IMPLEMENTATATION USING ARRAY*****************************
#include<stdio.h>
#include<stdlib.h>
#define N 5
int Queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (front==-1 && rear ==-1)
    {
        front = rear = 0;
        Queue[rear] = x;
    }
    else if (rear == N-1)
    {
        printf("\nOverflow condtion\n");
    }
    else{
        rear++;
        Queue[rear] = x;
    }
}



void dequeue()    //deletion
{
    if (front == -1 && rear == -1)
    {
        printf("\n Underflow condition \n");
    }

    else if (front == rear) //queue empty condition
    {
        printf("\n Element is %d \n", Queue[front]);
        front = rear = -1;
    }
    
    else{
        printf("Deleted element is %d \n", Queue[front]);
        front++;
    }   
}




void peek()
{
    if (front==-1 && rear ==-1)
    {
        printf("\n Underflow condition \n");
    }

    else{
        printf("\nElement at the top is %d\n", Queue[front]);
    }
    
}




void display()
{
    int i = front;
    if (front== -1 && rear == -1)
    {
        printf("\nQueue is empty\n");
    }

    else{
        printf("your elements in queue are");
        while (i< (rear+1))    
        {
            printf(" %d  ", Queue[i]);
            i++;
        }
        
    }
    
}

int main()
{
    enqueue(5);
    enqueue(45);
    enqueue(234);
    enqueue(123);
    display();
    printf("\n\n*******After deletion******* \n");
    dequeue();
    display();
    peek();
}