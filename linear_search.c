#include <stdio.h>

int main()
{
    int i,n, element, arr[100];
    int found=0;
    
    printf("\n LINEAR SEARCH \n");
    printf("Enter the no. of elements: \n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Given elements:\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\n Enter the element you want to search:\n");
    scanf("%d", &element);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            printf("Element %d found at location: %d",element,i);
            found=1;
            break;
        }
    }
    
    if(!found)
    {
      printf("Element %d not found", element);
    }
}
