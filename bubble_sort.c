

#include <stdio.h>

int main()
{
  //Bubble sort
  
  int i,j=0;
  int n,temp;
  int arr[5];
  printf("\n *** BUBBLE SORT**\n");
  printf("\n Enter how many values to be inserted:\n");
  scanf("%d", &n);
  printf("Enter the elements:\n");
  for(i=0; i<n;i++)
  {
  scanf("%d", &arr[i]);
  }
  printf("Elements in the array:\n");
  for(i=0;i<n;i++)
  {
      printf("%d\t", arr[i]);
  }
  for(i=0; i<n-1;i++)
  {
      for(j=0; j<n-1-i; j++)
      {
          if(arr[j]<arr[j+1])
          {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
          }
      }
  }
  printf("\nSorted Elements in the bubble Sort are:\n");
  for(i=0;i<n;i++)
  {
  printf("%d\t",arr[i]);
  }
}
