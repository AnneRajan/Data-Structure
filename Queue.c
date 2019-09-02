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
        printf("\n ***QUEUE IMPLEMENTATION ***\n");
        printf("\n\t 1.INSERT \n\t 2.DELETE \n\t 3.DISPLAY \n\t 4.EXIT \n");
        printf("\n Enter your choice:");
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
                break;
                
                
            default:
                printf("\n Invalid choice\n");
        }
    }
}

void insert()
{
   if(rear==n)
   {
       printf("\n QUEUE IS FULL");
   }
   else
   {
       printf("\n Enter the element in the queue:");
       scanf("%d",&item);
       queue_arr[rear]=item;
       rear++;
       
       printf("\n Inserted element:%d",item);
   }
}
void delete(void)
{
    if(front==rear)
    {
        printf("\n QUEUE IS EMPTY!!");
    }
    else
    {
        printf("\n Deleted Element:%d",queue_arr[front]);
        for(i=0;i<rear-1;i++)
        {
            queue_arr[i]=queue_arr[i+1];
        }
        rear--;
    }
}
void display(void)
{
    if(front==rear)
    {
        printf("\n QUEUE IS EMPTY ");
    }
    else
    {
        printf("\n ELEMENTS IN THE QUEUE:");
        for(i=front;i<rear;i++)
        {
            printf("%d\t",queue_arr[i]);
        }
    }
    
}
