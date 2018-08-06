#include<stdio.h>

int main()
{
    int n,i,size,binCount = 1;
    printf("Enter the number of items in Set: ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter %d items:", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the bin size: ");
    scanf("%d", &size);

    int s = size;
    for (i = 0; i < n; i++)
    {
        if (s - *(a + i) > 0)
        {
            s -= *(a + i);
            continue;
        }
        else
        {
            binCount++;
            s = size;
            i--;
        }
    }

    printf("\nTotal Number of bins needed: %d", binCount);
    printf("\n");

    return 0;
}
