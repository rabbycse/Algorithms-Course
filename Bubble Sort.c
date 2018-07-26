#include <stdio.h>

int main()
{
    int array[100], n, i, j, swap;

    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the element of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0 ; i < n - 1; i++)
    {
        for (j = i+1 ; j < n; j++)
        {
            if (array[i] > array[j])
            {
                swap       = array[i];
                array[i]   = array[j];
                array[j] = swap;
            }
        }
    }

    printf("After Sorting:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", array[i]);

    return 0;
}
