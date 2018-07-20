#include<stdio.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = (l - 1);
    //int swap;

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            //swap       = arr[i];
            //arr[i]   = arr[j];
            //arr[j] = swap;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int pi = partition(arr, l, h);

        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, h);
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

    quickSort(arr, 0, n-1);

    printf("After sorting:");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
