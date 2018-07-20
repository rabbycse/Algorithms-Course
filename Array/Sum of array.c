#include<stdio.h>

int main()
{
    int sum=0, i, arr[5];

    printf("Enter a array of number : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum = %d",sum);
    printf("\nAverage = %.2f",(float)sum/5);

    return 0;
}
