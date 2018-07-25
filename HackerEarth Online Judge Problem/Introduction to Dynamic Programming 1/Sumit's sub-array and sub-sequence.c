#include<stdio.h>

long kadane(int n,long* arr)
{
    long sum=0,max=0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum<0)
            sum=0;
        if(max<sum)
            max =sum;
    }
    return max;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t-->0)
    {
        int n;
        scanf("%d",&n);
        long int arr[1001];
        for(int i=0; i<n; i++)
            scanf("%ld",&arr[i]);
        long tmax;
        for(int i=0; i<n; i++)
            if(tmax<arr[i])
                tmax = arr[i];
        if(tmax<=0)
            printf("%ld %ld\n",tmax,tmax);
        else
        {
            printf("%ld ",kadane(n,arr));
            long max=0;
            for(int i=0; i<n; i++)
                if(arr[i]>0)
                    max += arr[i];
            printf("%ld\n",max);
        }
    }
    return 0;
}
