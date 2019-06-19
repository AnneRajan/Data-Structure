#include<stdio.h>
int main()
{
    int i, j=0;
    int key,n;
    int arr[5];
    
    printf("\n*** INSERTION SORT ***\n");
    printf("Enter the no. of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
    
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key )
        {
            arr[j+1] = arr[j];
            j=j-1;
            
        }
        arr[j+1]=key;
        
    }
    printf("Sorted Elements in Insertion Sort are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}