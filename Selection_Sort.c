
#include <stdio.h>

int main()
{
    int i,j=0;
    int n,temp, min;
    int arr[10];
    
    printf("\n *** SELECTION SORT ***\n");
    printf("\n Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Given array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    for(i=0; i<n-1;i++)
    {
        min=i;
        for(j=i+1; j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp= arr[i];
        arr[i]= arr[min];
        arr[min]= temp;
    }
    
    printf("\n Sorted elements are:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
}
