#include<stdio.h>
int stack[10],n,i,top=-1, choice,element;
void push();
void pop();
void display();
void peek();
int main()
{
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    
    while(choice!=5)
    {
        printf("\n\t STACK OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK  \n\t 5.EXIT");
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
    if(top>n)
    {
        printf("\n STACK IS FULL!!");
    }
    else
    {
        printf("\n Enter the element you want to push into the stack:");
        scanf("%d", &element);
        top++;
        stack[top]=element;
        printf("\n Pushed element into the stack:%d ",stack[top]);
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n STACK IS EMPTY!!");
    }
    else
    {
        printf("Popped Element: %d",stack[top]);
        top--;
    }
    
}
void display()
{
    if(top<=-1)
    {
        printf("\n STACK IS EMPTY!!");
    }
    else
    {
        printf("\n Elements pushed into the stack:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
void peek()
{
    if(top<=-1)
    {
        printf("\n STACK IS EMPTY!!");
    }
    else
    {
       printf("\n Top element in the stack: %d", stack[top]);
    }
}
