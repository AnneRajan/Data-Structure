#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node* link;
    int data;
};
struct node* root=NULL;
int len;

void insertatend(void);
void insertatbegin(void);
void insertafter(void);
int length(void);
void display(void);
void deleteatbegin(void);
void delete(void);
void main()
{
    int choice;
    while(choice!=8)
    {
        printf("\n\t LINKED LIST \n");
        printf("\n\t1.Insert at end \n\t2.Insert at beginning \n\t3.Insert at after \n\t4.Length of the list \n\t5.Display \n\t6.Delete at begin \n\t7.Delete at specific \n\t8.EXIT \n\n");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insertatend();
                break;
            }
            case 2:
            {
                insertatbegin();
                break;
            }
            case 3:
            {
                insertafter();
                break;
            }
            case 4:
            {
                length();
                break;
            }
            case 5:
            {
                display();
            }
            case 6:
            {
                deleteatbegin();
                break;
            }
            case 7:
            {
                delete();
                break;
            }
            case 8:
            {
                printf("\n EXITED");
                break;
            }
            default:
            {
                printf("\n Invalid Choice");
            }
        }
    }
    
    
}


void insertatend()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the node data:");
    scanf("%d", &temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void insertatbegin()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the node data:");
    scanf("%d", &temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else{
        temp->link=root;
        root=temp;
    }
}
void insertafter()
{
    struct node* p;
    struct node* temp;
    int i=1,loc,len;
    printf("\n Enter the location you want to insert:");
    scanf("%d", &loc);
    len=length();
    if(loc>len)
    {
        printf("\n Invalid location");
        printf("\n Currently linked list is having % nodes",len);
    }
    else
    {
        p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the node data:");
        scanf("%d", &temp->data);
        temp->link=NULL;
        temp->link=p->link;
        p->link=temp;
    }
   
    
}
int length()
{
    int count=0;
    struct node *temp;
    temp=root;
    while(temp!=NULL)
    {
        temp=temp->link;
        count++;
    }
    printf("\n Length of the linked list is %d", count);
}
void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("\n Linked list Empty!! \n");
    }
    while(temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->link;
    }
}

void delete()
{
    struct node* temp;
    int loc,i=1, len;

    printf("\n Enter the location you want to delete: ");
    scanf("%d", &loc);
    len=length();
    if(loc>len)
    {
        printf("Invalid location\n");
        printf("Currently list have %d length",len);
    }
    else if(loc==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        struct node* p=root,*q;
        while(i<loc-1)
        {
           p=p->link;
           i++;
        }
        q = p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}

void deleteatbegin()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("\n Linked List is Empty!!");
    }
    else
    {
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
}
