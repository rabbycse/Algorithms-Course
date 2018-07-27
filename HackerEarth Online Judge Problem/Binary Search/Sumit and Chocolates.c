/*                                    rabby.code
                                    Md.Golam Rabbani
                             Sumit and Chocolates - https://www.hackerearth.com/rabby.code/
                                         2018
                                    */

#include<stdio.h>
int binarySearch(int array[], int key, int left, int right, int index)
{
    if (left <= right)
    {
        int mid = left + ((right - left + 1) / 2);
        if (array[mid] > key)
        {
            index = mid;
            right = mid - 1;
        }
        else if (array[mid] < key)
        {

            left = mid + 1;
        }
        else
        {
            index = mid;
            return index;
        }
        index = binarySearch(array, key, left, right, index);
    }
    return index;
}
int main()
{
    int num;
    scanf("%d", &num);
    int elements[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &elements[i]);
    }
    int sum[num];
    for (int i = 0; i < num; i++)
    {
        sum[i] = 0;
    }
    for (int i = 0; i < num; i++)
    {
        if (i == 0)
        {
            sum[i] = elements[i];
        }
        else
        {
            sum[i] = sum[i - 1] + elements[i];
        }
    }
    int query;
    printf("\n");
    scanf("%d", &query);
    for (int i = 0; i < query; i++)
    {
        int index;
        scanf("%d", &index);
        int result = binarySearch(sum, index, 0, num - 1, 0);
        printf("%d\n", result + 1);
    }
    return 0;
}
