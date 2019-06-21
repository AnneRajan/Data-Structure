#include<stdio.h>
 
int stack[100],choice,n,top,item,i;
void push(void);
void pop(void);
void display(void);
void peek(void);
int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK  \n\t 5.EXIT");
    while(choice!=5)
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
                {
                    peek();
                    break;
                }
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("\n Pushed element at stack: %d", item);
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}

void peek()
{
    if(top<=-1)
    {
        printf("\n Stack is Underflow");
    }
    else
    {
        printf("Element found: %d",stack[top]);
    }
    
}