#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
};
struct node* root=NULL;
int len;

void insertatend(void);
void insertatbegin(void);
void insertafter(void);
int length();
void display(void);
void delete();
void deletebegin();
void deleteend();

void main()
{
    int choice;
    while(choice!=8)
    {
    printf("\n\t\t ***LINKED LIST***\n\n");
    printf("\n\t 1.Insert at End \n\t 2.Insert at Begin \n\t 3.Insert After \n\t 4.Length of the Linked List \n\t 5.Display \n\t 6.Delete \n\t 7.Delete at Begin \n\t 9.Exit");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
                insertatend();
                break;
        case 2:
                insertatbegin();
                break;
        case 3:
                insertafter();
                break;
        case 4:
                length();
                break;
        case 5:
                display();
                break;
                
        case 6:
                delete();
                break;
                
        case 7:
                deletebegin();
                break;
  
        case 8:
               
                printf("\nExited\n");
                break;
                
        default:
                printf("\n Invalid choice\n");
                printf("Choose correct options(1-7)");
                
    }
    }
}

void insertatend()
{
    struct node* temp;
    temp = (struct node*) malloc(sizeof(struct node));
    printf("\n Enter the value of a node you want to insert:");
    scanf("%d", &temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p!=NULL)
        {
            p = p->link;
        }
        p->link = temp;
        
    }
}

void insertatbegin()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value of a node you want to insert:");
    scanf("%d", &temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
       temp->link=root;
       root=temp;
    }
}
void insertafter()
{
    struct node* p;
    struct node* temp;
    int loc,i=1;
    printf("\n Entere the location where you want to insert data:");
    scanf("%d", &loc);
    len = length();
    if(loc>len)
    {
        printf("\n Invalid location");
        printf("Currently list is having %d node",len);
    }
    else
    {
        p=root;
        
        while(i<loc)
        {
            p = p->link;
            i++;
        }
        temp = (struct node*)malloc(sizeof(struct node));
        printf("\n Enter the data you want to insert in the node:");
        scanf("%d", &temp->data);
        temp->link=NULL;
        
        temp->link=p->link;
        p->link=temp;
        
    }
    
}
int length()
{
    int count=0;
    struct node* temp;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    printf("Length of linked list: %d", count);
    return count;
}
void display()
{
    struct node* temp;
    temp=root;
    if(root==NULL)
    {
        printf("Empty Linked list");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d-->",temp->data);
            temp=temp->link;
        }
        printf("\n\n");
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

void deletebegin()
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
