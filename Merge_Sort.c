#include <stdio.h>


void merge(int a[],int, int, int);
void merge_sort(int a[], int, int);

int main()
{
	int arr[100], i, n;
	printf("\nMERGE SORT:\n");
    printf("\nEnter the number of elements in the array : ");
    scanf("%d",&n);
    printf("\nEnter the %d elements of the array: ",n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
   	 }

    printf("\nThe given array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    merge_sort(arr, 0, n-1);
	printf("\n The sorted array is: \n");
    for(i=0;i<n;i++)
    {
        printf(" %d\t",arr[i]);
    }
    
    return 0;         
}

void merge(int arr[], int low, int mid, int high)
{
    int c[100]; 
	int i=low, j=mid+1, k=low;
	while((i<=mid) && (j<=high))
	{
        if(arr[i] < arr[j])
        {
            c[k] = arr[i];
            i++;
            
        }
        else
        {
            c[k] = arr[j];
            
            j++;
        }
        k++;
        
    }
    while(i<=mid)
    {
        c[k]=arr[i];
        i++;
        k++;
        
    }
    while(j<=high)
    {
        c[k]=arr[j];
	    j++;
		k++;		  
        
	}
	i=low;
    while(i<=high)
	{
		arr[i]=c[i];
		i++;
		
	}
    
}
void merge_sort(int arr[], int low, int high)
{
    int mid;
    if(low<high)
    
    {
        mid = (low+high)/2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
        
    }
}
 




