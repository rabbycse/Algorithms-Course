#include <stdio.h>
#include <math.h>

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;

       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main()
{
    int n,i,arr[100];
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    insertionSort(arr, n);

    printf("After sorting:");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
