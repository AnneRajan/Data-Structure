#include<stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue(void);
void display();

int cQueue[SIZE], front = -1, rear = -1;
int choice, value;

void main()
{
   
   
   while(1){
      printf("\n****** MENU ******\n");
      printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("\nEnter the value to be insert:  ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: 
	 {
	     printf("\n EXITED");
	     break;
	 }
	 default: printf("\nPlease select the correct choice!!!\n");
      }
   }
}

void enQueue(int value)
{
    if((front==rear+1) || ((SIZE==rear+1)&&(front==0))) 
    {
        printf("\n Circular Queue is Full!!");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        cQueue[rear]=value;
        
    }
    else if(rear==SIZE-1)
    {
        rear=0;
        cQueue[rear]=value;
    }
    else
    {
        rear++;
        cQueue[rear]=value;
     
        printf("\n Element inserted: %d\n",value);
    }
}
void deQueue()
{
    if((front==-1)&& (rear==-1))
    {
        printf("\n Circular Queue is Empty!!");
    }
    else if(front==rear)
    {
        value=cQueue[front];
        front=rear=-1;
        
    }
    else if(front==SIZE-1)
    {
        value=cQueue[front];
        front=0;
        
    }
    else
    {
        value=cQueue[front];
        printf("Deleted element is %d", value);
        front++;
    }
}
void display()
{
    int i,j;
    if(front==0&&rear==-1)
    {
        printf("Queue is underflow\n");
       
    }
    if(front>rear)
    {
        for(i=0;i<=rear;i++)
            printf("\t%d",cQueue[i]);
        for(j=front;j<=max-1;j++)
            printf("\t%d",,cQueue[j]);
       
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d",,cQueue[i]);
        }
    }
    
}
