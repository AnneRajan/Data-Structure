#include<stdio.h>
void insert(void);
void delete(void);
void display(void);

int i,n,item,queue_arr[100];
int front,rear=0;

void main()
{
    int choice;
    printf("\n ***QUEUE IMPLEMENTATION ***\n");
    printf("Enter the size of the queue(MAX 100):\n");
    scanf("%d", &n);
    while(choice!=4)
    {
        printf("\n\t 1.INSERT \n\t 2.DELETE \n\t 3.DISPLAY \n\t 4.EXIT \n");
        scanf("%d", &choice);
        switch(choice)
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
                printf("\n EXITED");
                
            default:
                printf("Invalid choice\n");
        }
    }
}

void insert()
{
   if(rear==n)
   {
       printf("Queue is Full!!");
   }
   else
   {
           printf("\n Enter the element you want to insert:\n");
           scanf("%d", &item);
           queue_arr[rear]=item;
           rear++;
           printf("Element %d inserted in the queue",item);
      
   }
}

void delete()
{
    if(front==rear)
    {
        printf("Queue is empty!!");
    }
    else
    {
        printf("Deleted element is: %d",queue_arr[front]);
        for(i=0;i<rear-1;i++)
        {
            queue_arr[i]=queue_arr[i+1];
            
        }
        rear--;                 //changing the rear position 
        
    }
}

void display()
{
    if(front==rear)
    {
        printf("Queue is empty!!");
    }
    else
    {
        printf("\n Queue Displayed");
        for(i=front; i<rear;i++)
        {
            printf("%d\t", queue_arr[i]);
        }
    }
}










