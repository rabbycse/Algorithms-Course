#include<stdio.h>
int arr[1000000],arr1[1000000];
int main()
{
    int n,i;
    long long int sum=0;
    scanf("%d",&n);
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(i=0; i<=n-1; i++)
    {
        if(arr[i]-arr1[i]>0)
        {
            sum+=arr[i]-arr1[i];
        }
        else
        {
            sum+=arr1[i]-arr[i];
        }
    }
    printf("%lld",sum);
    return 0;
}
