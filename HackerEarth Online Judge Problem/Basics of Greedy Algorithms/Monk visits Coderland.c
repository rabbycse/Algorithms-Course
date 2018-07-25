

/** My Online Submit Link: https://www.hackerearth.com/submission/18420212/
**/



#include<stdio.h>

int main()
{
    int t,i,n,j,arr[100000];
    scanf("%d",&t);
    for(i=0; i<=t-1; i++)
    {
        long long int sum=0,m;
        scanf("%d",&n);
        for(j=0; j<=n-1; j++)
        {
            scanf("%d",&arr[j]);
            if(j>0)
            {
                if(arr[j]>arr[j-1])
                {
                    arr[j]=arr[j-1];
                }
            }
        }
        for(j=0; j<=n-1; j++)
        {
            scanf("%lld",&m);
            sum+=m*arr[j];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
