#include <stdio.h>
long int n;
int max(int a, int b){
    return(a>b) ? a:b;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=1; j<=t; j++)
    {
        long long int dp[10001],a[10001];
        scanf("%ld",&n);
        for(long int i=0; i<n; i++)
            scanf("%lld",&a[i]);
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        for(long int i=2; i<n; i++)
            dp[i]=max(a[i]+dp[i-2],dp[i-1]);
        printf("Case %d:% lld\n",j,dp[n-1]);
    }
    return 0;
}
