#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;

void insertatbegin(void);
void insertatend(void);
void insertatspecific(void);
int length(void);
void display(void);
void deleteatbegin(void);

void main()
{
    int choice;
    while(choice!=9)
    {
        printf("\n *****DOUBLY LINKED LIST*****\n");
        printf("\n\t1.INSERT AT BEGIN \n\t2.INSERT AT END \n\t3.INSERT SPECIFIC  \n\t4.LENGTH \n\t5.DISPLAY \n\t6.DELETE AT BEGIN \n\t7.DELETE AT END \n\t8.DELETE BEFORE  \n\t9.EXIT");
        printf("\n Enter yur choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insertatbegin();
                break;
            }
            case 2:
            {
                insertatend();
                break;
            }
            case 3:
            {
                insertatspecific();
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
                break;
            }
            case 6:
            {
                deleteatbegin();
                break;
            }
            case 9:
            {
                printf("\n EXITED");
                break;
            }
            default:
                printf("\n Invalid Choice!!");
        }
    }
}

void insertatbegin()
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\n Enter the node data:");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        temp->right=root;
        root->left=temp;
        root=temp;
    }
}
void insertatend()
{
    struct node* temp;
    struct node* p;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the node data:");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;
            p->right=temp;
            temp->right=NULL;
            temp->left=p;
            
        }
        
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
        temp=temp->right;
    }
    
    printf("\n Length of the linked list is %d", count);
}

void display()
{
    struct node* temp;
    temp=root;
    if(temp==NULL)
    {
        printf("\n Linked List is Empty!!");
    }
    else
    {
        printf("\n Elements in the Linked list are: ");
        while(temp!=NULL)
        {
            printf("%d->", temp->data);
            temp=temp->right;
        }
    }
}
void insertatspecific()
{
    int loc,len,i;
    struct node* temp;
    struct node* p;
     p=root;
    printf("\n Enter the location to add a node:");
    scanf("%d",&loc);
    len=length();
    if(loc>len)
    {
        printf("\n Invalid Location");
        printf("\n Currently location is %d",len);
    }
    else
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the node data:");
        scanf("%d", &temp->data);
        temp->left=NULL;
        temp->right=NULL;
       
        while(i<loc)
        {
            p=p->right;
            i++;
        }
        temp->right=p->right;
        p->right->left=temp;
        temp->left=p;
        p->right=temp;
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
        root=temp->right;
        temp->right=NULL;
        free(temp);
    }
}
