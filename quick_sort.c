#include <stdio.h>

void quicksort(int arr[], int ,int);

int main()
{
    int i,n;
    int arr[100];
    printf("\n **QUICK SORT **\n");
    printf("Enter the number of elements\n");
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
    quicksort(arr,0,n-1);
    printf("\n Elements sorted in Quick sort:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}
void quicksort(int arr[100], int first ,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        i=first;
        j=last;
        pivot=first;
        while(i<j)
        {
            while(arr[i]< arr[pivot] && i<last)
            i++;
            while(arr[j]>arr[pivot])
            j--;
            
            if(i<j)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
}