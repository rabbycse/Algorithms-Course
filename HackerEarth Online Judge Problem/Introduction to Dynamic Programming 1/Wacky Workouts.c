#include<stdio.h>
#include<assert.h>

int main()
{
    int t,i,n,k;
    int dp[n];
    dp[1]=2;
    dp[2]=3;
    assert(1<n<=(10^18));
    scanf("%d",&t);
    for(k=0; k<t; k++)
    {
        scanf("%d",&n);
        for(i=2; i<n; i++)
        {
            dp[i]=dp[i-1]+i-1;


        }
        printf("%d",dp[n]);

    }
    return 0;
}
